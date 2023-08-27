// https://www.codingninjas.com/studio/problems/left-rotate-an-array-by-one_5026278?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp = arr[0]; 
    for(int i = 0; i<arr.size()-1; i++)
        arr[i] = arr[i+1]; 
    arr[n-1] = temp; 

    return arr; 
}
