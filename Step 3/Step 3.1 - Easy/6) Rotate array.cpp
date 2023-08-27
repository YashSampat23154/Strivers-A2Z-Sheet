// https://www.codingninjas.com/studio/problems/rotate-array_1230543?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

vector<int> rotateArray(vector<int>arr, int k) {
    reverse(arr.begin(), arr.begin()+k); 
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end()); 
    return arr; 
}
