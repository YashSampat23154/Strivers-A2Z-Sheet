// https://www.codingninjas.com/studio/problems/aggressive-cows_1082559?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

bool checkMinPos(vector<int> &stalls, int minDist, int k){

    int totalCowsPlaced = 1, lastPlacedCow = stalls[0]; 

    for(int i = 1; i<stalls.size(); i++){
        if(stalls[i] >= lastPlacedCow + minDist){
            totalCowsPlaced++; 
            lastPlacedCow = stalls[i];
        }
    }

    if(totalCowsPlaced >= k) 
        return 1; 
    else 
        return 0; 

}

int aggressiveCows(vector<int> &stalls, int k)
{
   sort(stalls.begin(), stalls.end()); 

   int lower = 1, higher = stalls[stalls.size()-1];
   int ans = -1; 

   while(lower <= higher){
       int mid = lower + (higher - lower)/2; 

       if(checkMinPos(stalls, mid, k)){
           ans = mid; 
           lower = mid + 1; 
       }
       else 
        higher = mid - 1;
   }
   return ans; 
}