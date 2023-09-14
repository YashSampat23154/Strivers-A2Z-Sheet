// https://www.codingninjas.com/studio/problems/longest-subarray-with-zero-sum_6783450?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<vector>
#include<unordered_map>

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	unordered_map<int, int> mp; 

	int prefix = 0, maxLength = 0; 
	for(int i = 0; i<arr.size(); i++){
		prefix += arr[i]; 

		if(prefix == 0) maxLength = max(maxLength, i+1); 

		if(mp.find(prefix) != mp.end())
			maxLength = max(maxLength, i-mp[prefix]);
		else
			mp[prefix] = i; 
	}

	return maxLength; 
}