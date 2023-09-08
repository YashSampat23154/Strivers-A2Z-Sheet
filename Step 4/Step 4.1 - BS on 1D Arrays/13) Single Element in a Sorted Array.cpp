// https://www.codingninjas.com/studio/problems/unique-element-in-sorted-array_1112654?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int singleNonDuplicate(vector<int>& arr)
{
	if(arr[0] != arr[1]) return arr[0]; 
	if(arr[arr.size()-1] != arr[arr.size()-2]) return arr[arr.size()-1]; 

	int start = 0, end = arr.size()-1; 

	while(start <= end){
		int mid = start + (end - start)/2; 

		if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1])
			return arr[mid]; 

		if(mid%2 == 0){
			if(arr[mid] == arr[mid+1])
				start = mid+1;
			else
				end = mid-1; 
		}
		else{
			if(arr[mid] == arr[mid-1])
				start = mid+1;
			else
				end = mid-1;
		}
	}

	return -1; 
}