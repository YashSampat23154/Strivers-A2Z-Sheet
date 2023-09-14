// https://www.codingninjas.com/studio/problems/quick-sort_5844?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int input[], int start, int end) {
	
	int partitionIndex = start;
	
	int l = start + 1, r = end; 

	while(l <= r){

		while(l <= r && input[l] <= input[partitionIndex]) l++; 

		while(l <= r && input[r] > input[partitionIndex]) r--;

		if(l < r)
			swap(input[l], input[r]); 
		
	}

	swap(input[l-1], input[partitionIndex]); 
	return l-1; 
}

void quickSort(int input[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/

	if(start >= end) return; 

	int partitionIndex = partitionArray(input, start, end);
	quickSort(input, start, partitionIndex-1); 
	quickSort(input, partitionIndex+1, end); 
	return; 
}