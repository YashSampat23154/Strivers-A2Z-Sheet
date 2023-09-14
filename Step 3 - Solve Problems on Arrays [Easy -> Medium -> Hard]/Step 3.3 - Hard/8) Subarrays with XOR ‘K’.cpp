// https://www.codingninjas.com/studio/problems/subarrays-with-xor-k_6826258?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include <unordered_map>

int subarraysWithSumK(vector < int > a, int b) {
    unordered_map<int, int> mp; 
    mp[0]++; 

    int prefix = 0, ans = 0; 
    for(int i=0; i<a.size(); i++){
        prefix ^= a[i]; 
        ans+=mp[prefix^b]; 
        mp[prefix]++; 
    }

    return ans; 
}