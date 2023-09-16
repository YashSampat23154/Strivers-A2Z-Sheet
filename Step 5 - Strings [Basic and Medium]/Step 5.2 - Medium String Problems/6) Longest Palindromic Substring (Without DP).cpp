// https://www.codingninjas.com/studio/problems/longest-palindromic-substring_758900?leftPanelTab=0

bool isPalindrome(string s, int start, int end){
    if(start > end) return true; 
    return s[start] == s[end] && isPalindrome(s, start+1, end-1);
}

string longestPalinSubstring(string str) {
    string ans = ""; 

    for(int i = 0; i<str.length(); i++){
        string temp = "";
        for(int j = i; j<str.length(); j++){
            temp += str[j]; 
            if(isPalindrome(temp, 0, temp.length()-1) && temp.length() > ans.length())
                ans = temp; 
        } 
    }

    return ans; 
}