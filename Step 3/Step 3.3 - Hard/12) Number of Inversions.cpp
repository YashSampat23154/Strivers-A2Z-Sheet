// https://www.codingninjas.com/studio/problems/number-of-inversions_6840276?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

void countInversionHelper(vector<int>&a, int start, int mid, int end, int &count){
    int leftIndex = start, rightIndex = mid+1; 
    vector<int> temp(end-start+1); 
    int tempIndex = 0; 

    while(leftIndex <= mid && rightIndex <= end){
        if(a[leftIndex] <= a[rightIndex])
            temp[tempIndex++] = a[leftIndex++];

        else if(a[leftIndex] > a[rightIndex]){
            temp[tempIndex++] = a[rightIndex++];
            count+=mid-leftIndex+1; 
        }
    }

    while(leftIndex <= mid)
        temp[tempIndex++] = a[leftIndex++];
    while(rightIndex <= end)
        temp[tempIndex++] = a[rightIndex++]; 

    tempIndex = 0;
    for(int i = start; i<=end; i++)
        a[i] = temp[tempIndex++]; 
    
    return; 
}

void countInversion(vector<int>&a, int start, int end, int &count){
    if(start >= end) return; 

    int mid = start + (end - start)/2; 

    countInversion(a, start, mid, count); 
    countInversion(a, mid+1, end, count); 
    countInversionHelper(a, start, mid, end, count); 
    return; 
}

int numberOfInversions(vector<int>&a, int n) {
    int count = 0; 
    countInversion(a, 0, n-1, count);
    
    return count; 
}