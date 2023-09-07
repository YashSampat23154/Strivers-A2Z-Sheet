// https://www.codingninjas.com/studio/problems/search-in-a-rotated-sorted-array-ii_7449547?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

bool searchInARotatedSortedArrayII(vector<int>& arr, int target) {
    int lower = 0, higher = arr.size()-1; 

    while(lower <= higher){
        int mid = lower + (higher - lower)/2; 

        if(arr[mid] == target) return 1; 
        else if (arr[lower] <= arr[mid]){
            if(arr[lower] <= target && target <= arr[mid])
                higher = mid - 1; 
            else 
                lower = mid + 1; 
        }
        else{
            if(arr[mid] <= target && target <= arr[higher])
                lower = mid + 1; 
            else 
                higher = mid - 1;
        }
    }
    return 0; 
}
