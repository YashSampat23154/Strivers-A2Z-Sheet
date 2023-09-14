// https://www.codingninjas.com/studio/problems/next-greater-permutation_6929564?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

vector<int> nextGreaterPermutation(vector<int> &A) {
    next_permutation(A.begin(), A.end()); 
    return A;
}