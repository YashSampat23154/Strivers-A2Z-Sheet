// https://www.codingninjas.com/studio/library/find-the-element-that-appears-once

#include<vector>

int getSingleElement(vector<int> &arr){
	int singleElement = 0; 

	for(auto ele : arr)
		singleElement ^= ele; 

	return singleElement; 	
}