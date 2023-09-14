// https://www.codingninjas.com/studio/problems/search-in-a-row-wise-and-column-wise-sorted-matrix_839811

#include <bits/stdc++.h> 
pair<int, int> search(vector<vector<int>> matrix, int x)
{
    int n = matrix.size(); 
    int row = 0, coln = n-1; 

    while(row < n && coln >= 0){
        if(matrix[row][coln] == x) return {row, coln}; 
        else if(matrix[row][coln] > x) coln--; 
        else row++; 
    }
    
    return {-1, -1}; 
}