// https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int maxLength = 0, startIndex = 0; 
    long long currSum = 0; 

    for(int i = 0; i<a.size(); i++){
        currSum += a[i]; 
        
        while(currSum > k)
            currSum -= a[startIndex++]; 

        if(currSum == k)
            maxLength = max(maxLength, i-startIndex+1);            
    }

    return maxLength;
}