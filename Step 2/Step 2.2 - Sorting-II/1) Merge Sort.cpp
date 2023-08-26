// https://www.codingninjas.com/studio/problems/merge-sort_5846?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

void merge(vector<int> & arr, int l, int mid, int r){
    int lIndex = l, rIndex = mid+1; 

    vector<int> newArr(r-l+1); 
    int newArrayIndex = 0; 

    while(lIndex <= mid && rIndex <= r){
        if(arr[lIndex] < arr[rIndex])
            newArr[newArrayIndex++] = arr[lIndex++];
        
        else
            newArr[newArrayIndex++] = arr[rIndex++];
    }

    while(lIndex <= mid)
        newArr[newArrayIndex++] = arr[lIndex++];

    while(rIndex <= r)
        newArr[newArrayIndex++] = arr[rIndex++];

    newArrayIndex = 0;
    for(int i = l; i <= r; i++)
        arr[i] = newArr[newArrayIndex++]; 

    return; 
}

void mergeSort(vector<int>& arr, int l, int r) {
    if(l >= r) return;

    int mid = l + (r-l)/2;
    mergeSort(arr, l, mid); 
    mergeSort(arr, mid+1, r); 
    merge(arr, l , mid, r); 
    return; 
}