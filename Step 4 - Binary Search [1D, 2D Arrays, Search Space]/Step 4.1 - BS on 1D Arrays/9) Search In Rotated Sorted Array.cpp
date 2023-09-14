// https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int searchSecondHalf(vector<int>& arr, int k){
    int lower = 0, higher = arr.size()-1, ans = -1; 

    while(lower <= higher){
        int mid = lower + (higher - lower)/2;

        if(arr[mid] == k) return mid; 
        else if (arr[mid] < k)
                lower = mid+1;
        else{
            if(arr[mid] < arr[0])
                higher = mid-1;
            else 
                lower = mid+1; 
        }
    }
    return -1; 
}

int searchFirstHalf(vector<int>& arr, int k){
    int lower = 0, higher = arr.size()-1, ans = -1; 

    while(lower <= higher){
        int mid = lower + (higher - lower)/2;

        if(arr[mid] == k) return mid; 
        else if (arr[mid] < k){
            if(arr[mid] < arr[0])
                higher = mid-1;
            else 
                lower = mid+1;  
        }
        else
            higher = mid-1; 
    }

    return -1; 
}


int search(vector<int>& arr, int n, int k)
{
    int check = 0; 
    if(k >= arr[0]) check = 1; 

    if(check == 0) return searchSecondHalf(arr, k); 
    else return searchFirstHalf(arr, k); 
}
