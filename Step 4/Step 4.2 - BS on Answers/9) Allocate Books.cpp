// https://www.codingninjas.com/studio/problems/allocate-books_1090540?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

bool checkMinPages(vector<int>& arr, int minPages, int m){
    
    int totalChildren = 0; 
    int currPages = 0; 

    for(int i = 0; i<arr.size(); i++){
        currPages += arr[i];
        if(currPages > minPages){
            totalChildren++; 
            currPages = arr[i]; 
        }
    }
    if(currPages > 0) totalChildren++; 

    if(totalChildren <= m)
        return 1;
    else 
        return 0;
}

int findPages(vector<int>& arr, int n, int m) {

    if(m > n) return -1; 

    int lower = *max_element(arr.begin(), arr.end());
    int higher = accumulate(arr.begin(), arr.end(), 0); 

    while(lower <= higher){

        int mid = lower + (higher - lower)/2; 
        int check = checkMinPages(arr, mid, m); 

        if(check){
            higher = mid - 1; 
        }
        else
            lower = mid + 1; 
           
    }
    return lower;
}