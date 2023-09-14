// https://www.codingninjas.com/studio/problems/n-to-1-without-loop_8357243?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

void solve(int curr, int n, vector<int> &ans){
    if(curr > n) return;  
    solve(curr+1, n, ans);
    ans.push_back(curr); 
}

vector<int> printNos(int x) {
    vector<int> ans; 
    solve(1, x, ans); 
    return ans; 
}