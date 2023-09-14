// https://leetcode.com/problems/remove-outermost-parentheses/description/

class Solution {
public:
    string removeOuterParentheses(string s) {
      string ans = ""; 
      int currCount = 0; 
      
      for(auto ele : s){
        if(ele == '('){
          if(currCount != 0)
            ans += '(';
          currCount++; 
        }
        else{
          if(currCount != 1)
            ans += ')'; 
          currCount--; 
        }
      }
      return ans;
    }
};