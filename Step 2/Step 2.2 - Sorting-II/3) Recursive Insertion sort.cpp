// https://www.codingninjas.com/studio/problems/insertion-sort_624381?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

void recursiveInsertionSort(int arr[], int index, int n){
    if(index == n) return; 

    int temp = arr[index]; 
    int i = index-1;
    for(; i>=0; i--)
        if(arr[i] > temp) arr[i+1] = arr[i]; 
        else break; 
    arr[i+1] = temp; 

    recursiveInsertionSort(arr, index+1, n); 
}

void insertionSort(int arr[], int n)
{
    recursiveInsertionSort(arr, 1, n);
}