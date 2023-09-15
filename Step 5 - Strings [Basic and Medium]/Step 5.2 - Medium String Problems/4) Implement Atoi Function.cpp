// https://www.codingninjas.com/studio/problems/implement-atoi-function_981270?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int createAtoi(string s) {
    int start = 0; 
    while(s[start] == ' ') start++; 

    bool negative = false; 
    if(s[start] == '-'){
        negative = true;
        start++;
    }
    else if(s[start] == '+') start++; 
    
    long long ans = 0; 
    int count = 0; 

    for(; start<s.length(); start++){
        if(48 <= s[start] && s[start] <= 57){
            ans = ans*10 + (s[start]-48);
            if(++count > 10) break;
        }
             
        else break;
    }

    if(negative)
        ans = ans*-1; 

    if(ans > INT_MAX)
        ans = INT_MAX; 
    else if (ans < INT_MIN)
        ans = INT_MIN;

    return ans; 
}