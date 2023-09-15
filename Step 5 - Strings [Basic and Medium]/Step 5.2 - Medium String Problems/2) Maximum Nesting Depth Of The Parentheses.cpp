// https://www.codingninjas.com/studio/problems/maximum-nesting-depth-of-the-parentheses_8144741?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int maxDepth(string s) {
	int ans = 0; 
	int currCount = 0;
	for(auto ele : s){
		if(ele == '(')
			currCount++; 
		else if (ele == ')')
			currCount--; 
		ans = max(ans, currCount);  
	}
	return ans; 
}
