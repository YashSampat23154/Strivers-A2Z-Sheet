// https://www.codingninjas.com/studio/problems/implement-atoi-function_981270?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

void solve(string s, long long &ans, int index, bool &check){
    if(index == s.length()) return;
    else if (s[index] == ' '){
        solve(s, ans, index+1, check); 
        return;
    }
    else if (ans == 0 && s[index] == '+'){
        if(index != 0 && (s[index-1] == '+' || s[index-1] == '-'))
            return;
        check = false; 
        solve(s, ans, index+1, check);
        return; 
    }
    else if (ans == 0 && s[index] == '-'){
        if(index != 0 && (s[index-1] == '+' || s[index-1] == '-'))
            return;
        check = true; 
        solve(s, ans, index+1, check); 
        return;
    }
    else if (!(48 <= s[index] && s[index] <= 57)) return; 
    
    ans = ans*10 + (s[index] - 48);
    if(ans > INT_MAX){
        ans = INT_MAX; 
        ans += 5;
        return; 
    } 
    solve(s, ans, index+1, check); 

}

int createAtoi(string s) {
    long long ans = 0; 
    bool check = false; // false indicates positive. 
    solve(s, ans, 0, check); 

    if(check)
        ans = -ans; 

    if(ans < INT_MIN)
        ans = INT_MIN;
    else if (ans > INT_MAX)
        ans = INT_MAX;  

    return ans; 
}