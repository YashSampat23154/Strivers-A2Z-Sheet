// https://www.codingninjas.com/studio/problems/roman-numeral-to-integer_981308?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int romanToInt(string s) {
    unordered_map<char, int> mp; 
    mp['I'] = 1; 
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int ans = 0; 

    for(int i=0; i<s.length(); i++){
        if(i != s.length()-1 && mp[s[i+1]] > mp[s[i]])
            ans += mp[s[i+1]] - mp[s[i++]]; 
        else 
            ans += mp[s[i]];       
    } 

    return ans; 
}