// https://www.codingninjas.com/studio/problems/rotation_7449070?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int findKRotation(vector<int> &arr){

    if(arr.size()==1 || arr[0] < arr[arr.size()-1]) return 0;

	int low = 0, high = arr.size()-1;

	while(low <= high){
		int mid = low + (high-low)/2;

		if(arr[mid] < arr[mid-1]) return mid;
		else if (arr[0] <= arr[mid]) low = mid+1;
		else high = mid-1;
	}
	return -1;   
}