// https://www.codingninjas.com/studio/problems/bubble-sort_624380?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

void bubbleSort(vector<int> &arr, int n) 
{
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]); 
        }
    }
}