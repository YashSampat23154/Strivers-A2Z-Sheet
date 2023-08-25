// https://www.codingninjas.com/studio/problems/sum-of-first-n-numbers_8876068?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

long long solve(long long n){
    if(n == 0) return 0; 
    else return n+solve(n-1); 
}

long long sumFirstN(long long n) {
    // return solve(n); 
    return n*(n+1)/2; 
}