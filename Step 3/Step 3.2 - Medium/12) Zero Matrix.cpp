// https://www.codingninjas.com/studio/problems/zero-matrix_1171153?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	
	bool make0Row0 = 0;
	for(int coln = 0; coln<m; coln++)
		if(matrix[0][coln] == 0) make0Row0 = 1; 
	
	bool make0Coln0 = 0;
	for(int row = 0; row<n; row++)
		if(matrix[row][0] == 0) make0Coln0 = 1; 
	
	for(int row = 1; row<n; row++){
		for(int coln = 1; coln<m; coln++){
			if(matrix[row][coln] == 0){
				matrix[0][coln] = 0; 
				matrix[row][0] = 0;
			}
		}
	}

	
	for(int coln = m-1; coln>0; coln--){
		if(matrix[0][coln] == 0){ 
			for(int row = 0; row<n; row++)
				matrix[row][coln] = 0;
		}
	}

	for(int row = 1; row<n; row++){
		if(matrix[row][0] == 0){ 
			for(int coln = 0; coln<m; coln++)
				matrix[row][coln] = 0;
		}
	}

	if(make0Row0)
		for(int coln = 0; coln<m; coln++)
			matrix[0][coln] = 0;

	if(make0Coln0)
		for(int row = 0; row<n; row++)
			matrix[row][0] = 0;

	return matrix; 
}