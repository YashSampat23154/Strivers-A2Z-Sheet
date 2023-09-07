// https://www.codingninjas.com/studio/problems/binary-search_972?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int search(vector<int> &nums, int target) {
    int lower = 0, higher = nums.size()-1; 

    while(lower <= higher){
        int mid = lower + (higher-lower)/2; 

        if(nums[mid] == target) return mid; 
        else if (nums[mid] < target) lower = mid+1; 
        else higher = mid - 1; 
    }

    return -1; 
}