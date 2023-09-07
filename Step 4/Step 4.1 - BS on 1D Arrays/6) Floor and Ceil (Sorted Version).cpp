// https://takeuforward.org/arrays/floor-and-ceil-in-sorted-array/

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    int first = -1, second = -1;  
    int index = lower_bound(arr, arr+n, x) - arr; 
   
    if(index == 0)
		second = arr[index];
	
    else if (index == n)
        first = arr[n-1];
	
    else if(arr[index] == x)
        first = second = arr[index]; 
    
    else{
        first = arr[index-1]; 
        second = arr[index]; 
    }

	return {first, second}; 
}