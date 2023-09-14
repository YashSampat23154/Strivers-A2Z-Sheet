// https://www.codingninjas.com/studio/problems/anagram-pairs_626517?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include <unordered_map>

bool isAnagram(string str1, string str2)
{
    unordered_map<char, int> mp; 
    for(auto ele : str1)
        mp[ele]++; 

    for(auto ele : str2)
        mp[ele]--; 

    for(auto it : mp)
        if(it.second != 0) return false; 
    
    return true; 
}