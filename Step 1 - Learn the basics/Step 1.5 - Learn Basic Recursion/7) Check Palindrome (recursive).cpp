// https://www.codingninjas.com/studio/problems/check-palindrome-recursive_624386?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

bool solve(int start, int end, string &str){
    if(start > end) return true; 
    return str[start] != str[end] ? false : solve(start+1, end -1, str);
}

bool isPalindrome(string& str) {
    return solve(0, str.length()-1, str);
}
