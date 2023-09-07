// https://www.codingninjas.com/studio/problems/lower-bound_8165382?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

// The lower bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.

int upperBound(vector<int> &arr, int x, int n){
	int lower = 0, higher = n-1; 
	int ans = n; 

	while(lower <= higher){
		int mid = lower + (higher-lower)/2; 

		if(arr[mid] > x){
			ans = mid; 
			higher = mid-1; 
		}
		else 
			lower = mid+1; 
	}

	return ans; 	
}

 