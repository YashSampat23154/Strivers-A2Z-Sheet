// https://www.codingninjas.com/studio/problems/-print-n-times_8380707?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

void solve(int curr, int n, vector<string> &ans){
    if(curr > n) return; 
    ans.push_back("Coding Ninjas"); 
    solve(curr+1, n, ans); 
}


vector<string> printNTimes(int n) {
	vector<string> ans; 
    solve(1, n, ans); 
    return ans; 
}