// https://www.codingninjas.com/studio/problems/largest-subarray-sum-minimized_7461751?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int noOfSubarryPossible(vector<int> a, int maxSubarrySize){
    int totalSubarryPossible = 1; 
    int currVal = 0; 

    for(int i = 0; i<a.size(); i++){
        currVal += a[i]; 
        if(currVal > maxSubarrySize){
            totalSubarryPossible++; 
            currVal = a[i];
        }
    }
    
    return totalSubarryPossible; 
}

int largestSubarraySumMinimized(vector<int> a, int k) {
    int lower = *max_element(a.begin(), a.end()); 
    int higher = accumulate(a.begin(), a.end(), 0);

    while(lower <= higher){
        int mid = lower + (higher - lower)/2; 

        if(noOfSubarryPossible(a, mid) > k)
            lower = mid + 1; 

        else 
            higher = mid - 1; 
    }
    return lower;
}