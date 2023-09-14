// https://www.codingninjas.com/studio/problems/subarray-with-maximum-product_6890008?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<vector>
#include<limits.h>

int subarrayWithMaxProduct(vector<int> &arr){
	int prefix = 1, suffix = 1; 
	int maxi = INT_MIN; 

	for(int i = 0; i<arr.size(); i++){
		if(prefix == 0) prefix = 1; 
		if(suffix == 0) suffix = 1; 

		prefix *= arr[i]; 
		suffix *= arr[arr.size()-i-1]; 

		maxi = max({maxi, prefix, suffix}); 

	}

	return maxi; 
}