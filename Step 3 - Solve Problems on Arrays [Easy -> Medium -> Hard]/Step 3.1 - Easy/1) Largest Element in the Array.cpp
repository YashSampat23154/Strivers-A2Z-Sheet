// https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int maxi = arr[0]; 
    for(auto ele : arr)
        maxi = max(maxi, ele); 

    return maxi; 
}
