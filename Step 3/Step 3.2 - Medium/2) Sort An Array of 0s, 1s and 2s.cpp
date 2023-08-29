// https://www.codingninjas.com/studio/problems/sort-an-array-of-0s-1s-and-2s_892977?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    int index0 = 0, index2 = arr.size()-1; 

    for(int i = 0; i<= index2; i++){
        i = max(index0, i); 
        if(arr[i] == 0)
            swap(arr[index0++], arr[i--]); 
        else if (arr[i] == 2)
            swap(arr[index2--], arr[i--]); 
    }
}
