// https://www.codingninjas.com/studio/problems/capacity-to-ship-packages-within-d-days_1229379?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

bool checkMinWeight (vector<int> &weights, int minWeight, int d){
    int totalDays = 1, weightTillNow = 0;

    for(int i = 0; i<weights.size(); i++){
        weightTillNow += weights[i];
        if(weightTillNow > minWeight){
            totalDays++;  
            weightTillNow = weights[i];
        }
        if(totalDays > d) return 0; 
    }
    return 1; 
}

int leastWeightCapacity(vector<int> &weights, int d)
{
    int lower = *max_element(weights.begin(), weights.end()); 
    int higher = accumulate(weights.begin(), weights.end(), 0); 
    int ans = -1; 

    while(lower <= higher){
        int mid = lower + (higher - lower)/2; 

        if(checkMinWeight(weights, mid, d)){
            ans = mid; 
            higher = mid - 1;
        }
        else 
            lower = mid + 1; 
    }
    return ans; 
}