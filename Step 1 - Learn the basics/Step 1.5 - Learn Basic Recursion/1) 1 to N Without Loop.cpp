// https://www.codingninjas.com/studio/problems/print-1-to-n_628290?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

void solve(int curr, int n, vector<int> &ans){
    if(curr > n) return; 
    ans.push_back(curr); 
    solve(curr+1, n, ans); 
}

vector<int> printNos(int x) {
    vector<int> ans; 
    solve(1, x, ans); 
    return ans; 
}