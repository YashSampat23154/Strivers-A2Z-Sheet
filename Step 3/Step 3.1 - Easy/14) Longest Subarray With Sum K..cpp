// https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_5713505?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    unordered_map<int, int> mp; 
    unordered_set<int> s; 

    int maxLength = 0; 

    int prefixSum = 0;
    s.insert(0); 
    mp[0] = -1; 

    for(int i = 0; i<nums.size(); i++){
        prefixSum += nums[i]; 
        if(s.count(prefixSum) == 0){
            mp[prefixSum] = i;
            s.insert(prefixSum); 
        } 

        if(s.count(prefixSum - k) != 0) 
            maxLength = max(maxLength, i-mp[prefixSum - k]);
    }

    return maxLength; 
}