// https://www.codingninjas.com/studio/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int searchInsert(vector<int>& arr, int x)
{
	int lower = 0, higher = arr.size()-1; 
	int ans = arr.size(); 

	while(lower <= higher){
		int mid = lower + (higher-lower)/2; 

		if(arr[mid] == x) return mid; 
		if(arr[mid] < x)
			lower = mid+1; 
		
		else{
			ans = mid; 
			higher = mid-1;
		} 
			 
	}

	return ans; 
}