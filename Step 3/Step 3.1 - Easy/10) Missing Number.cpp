// https://www.codingninjas.com/studio/problems/missing-number_6680467

int missingNumber(vector<int>&a, int N) {
    long long total = N*(N+1)/2; 
    for(auto ele : a)
        total -= ele;
    return total; 
}