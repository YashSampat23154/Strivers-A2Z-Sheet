// https://www.codingninjas.com/studio/problems/allocate-books_1090540?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int checkMinPages(vector<int>& arr, int minPages){
    
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
    return totalChildren;
}

int findPages(vector<int>& arr, int n, int m) {
    int lower = *max_element(arr.begin(), arr.end());
    int higher = accumulate(arr.begin(), arr.end(), 0); 
    int ans = -1; 

    while(lower <= higher){

        int mid = lower + (higher - lower)/2; 
        int totalChildren = checkMinPages(arr, mid); 

        if(totalChildren <= m){
            if(totalChildren == m)
                ans = mid; 
            higher = mid - 1; 
        }
        else{
            ans = max(ans, mid);   
            lower = mid + 1;
        }
             
    }
    if(ans == -1 && n > m) return *max_element(arr.begin(), arr.end()); 
    return ans;
}