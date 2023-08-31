// https://www.codingninjas.com/studio/problems/subarray-sums-i_1467103?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    unordered_map<int, int> mp; 
    mp[0]++; 

    int ans = 0, prefix = 0; 

    for(int i=0; i<arr.size(); i++){
        prefix += arr[i]; 
        ans+=mp[prefix-k]; 
        mp[prefix]++; 
    }

    return ans; 
}