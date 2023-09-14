https://www.codingninjas.com/studio/problems/occurrence-of-x-in-a-sorted-array_630456?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

#include<algorithm>

int count(vector<int>& arr, int n, int x) {
	int start = lower_bound(arr.begin(), arr.end(), x)-arr.begin();
	if(start == n || arr[start] != x) return 0; 
	int end = upper_bound(arr.begin(), arr.end(), x) - arr.begin(); 
	return end - start; 	
}
