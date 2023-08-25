// https://www.codingninjas.com/studio/problems/factorial-numbers-not-greater-than-n_8365435?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

void solve(int index, long long n, vector<long long> &ans){
    if(ans[ans.size()-1]*index > n) return; 
    ans.push_back(ans[ans.size()-1]*index); 
    solve(index+1, n, ans); 
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> ans;
    ans.push_back(1); 
    solve(2, n, ans); 
    return ans; 
}