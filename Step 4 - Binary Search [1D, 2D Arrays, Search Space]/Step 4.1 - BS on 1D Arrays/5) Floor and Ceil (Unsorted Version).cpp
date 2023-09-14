// https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	int lower = -1, higher = n; 

	for(int i =0; i<n; i++){
		if(arr[i] == x){
			lower = i; 
			higher = i; 
			break;
		}
		else if (arr[i] < x){
			if(lower == -1) lower = i; 
			else if(arr[lower] < arr[i])
				lower = i;
		}
		else{
			if(higher == n) higher = i; 
			else if(arr[higher] > arr[i])
				higher = i;
		}
	}

	int first = -1; 
	int second = -1; 
	
	if(lower != -1)
		first = arr[lower]; 

	if(higher != n)
		second = arr[higher]; 
		
	return {first, second}; 
}
