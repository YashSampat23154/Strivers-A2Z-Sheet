// https://www.codingninjas.com/studio/problems/merge-all-overlapping-intervals_6783452?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	sort(arr.begin(), arr.end()); 

	vector<vector<int>> ans;
	ans.push_back(arr[0]); 

	for(int i = 1; i<arr.size(); i++){
		if(arr[i][0] <= ans[ans.size()-1][1])
			ans[ans.size()-1][1] = max(ans[ans.size()-1][1], arr[i][1]); 
		else
			ans.push_back(arr[i]);
	}	

	return ans;
}