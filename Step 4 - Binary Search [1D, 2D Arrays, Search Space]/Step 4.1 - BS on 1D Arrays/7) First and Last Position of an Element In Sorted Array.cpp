// https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

int firstPosition(vector<int>& arr, int k){
    int lower = 0, higher = arr.size()-1;
    int ans = -1; 

    while(lower <= higher){
        
        int mid = lower + (higher - lower)/2; 

        if(arr[mid] == k){
            ans = mid; 
            higher = mid - 1; 
        }
        else if(arr[mid] < k)
            lower = mid + 1; 
        else 
            higher = mid - 1; 
    }

    return ans; 
}

int lastPosition(vector<int>& arr, int k){
    int lower = 0, higher = arr.size()-1;
    int ans = -1; 

    while(lower <= higher){
        
        int mid = lower + (higher - lower)/2; 

        if(arr[mid] == k){
            ans = mid; 
            lower = mid + 1; 
        }
        else if(arr[mid] < k)
            lower = mid + 1; 
        else 
            higher = mid - 1; 
    }

    return ans; 
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    return {firstPosition(arr, k), lastPosition(arr, k)};
}
