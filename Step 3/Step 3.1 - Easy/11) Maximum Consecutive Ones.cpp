// https://www.codingninjas.com/studio/problems/maximum-consecutive-ones_3843993

#include <bits/stdc++.h> 
int consecutiveOnes(vector<int>& arr){
    int maxiOnes = 0; 

    int currOnes = 0; 
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == 1) currOnes++; 
        else currOnes = 0; 
        maxiOnes = max(maxiOnes, currOnes); 
    }

    return maxiOnes; 
}

