// https://www.codingninjas.com/studio/problems/count-with-k-different-characters_1214627?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int most_k_chars(string& s, int k)
{
    unordered_map<char, int> mp;
    int ans = 0, start = 0, unique = 0;
 
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
        if(mp[s[i]] == 1) unique++; 
        while (unique > k) {
            mp[s[start]]--;
            if (mp[s[start]] == 0) 
                unique--; 
            start++;
        }
        ans += i-start+1;
    }
    return ans;
}

int countSubStrings(string str, int k) 
{
    return most_k_chars(str, k) - most_k_chars(str, k-1);
}
