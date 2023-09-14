// https://www.codingninjas.com/studio/problems/rotate-the-matrix_6825090?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	
	//transpose
	for(int i = 0; i<mat.size(); i++){
		for(int j = i+1; j<mat[i].size(); j++)
			swap(mat[i][j], mat[j][i]); 
	}

	//reverse
	for(int i = 0; i<mat.size(); i++)
		reverse(mat[i].begin(), mat[i].end()); 
	
}