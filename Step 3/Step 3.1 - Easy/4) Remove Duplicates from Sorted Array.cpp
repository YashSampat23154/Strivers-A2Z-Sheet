// https://www.codingninjas.com/studio/problems/remove-duplicates-from-sorted-array_1102307?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int removeDuplicates(vector<int> &arr, int n) {
	int index = 0; 
	for(int i = 1; i<arr.size(); i++){
		if(arr[index] != arr[i])
			arr[++index] = arr[i]; 
	}

	return index+1; 
}