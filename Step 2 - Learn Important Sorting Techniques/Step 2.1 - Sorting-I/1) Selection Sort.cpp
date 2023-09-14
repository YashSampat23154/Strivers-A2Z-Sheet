// https://www.codingninjas.com/studio/problems/selection-sort_624469?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

void selectionSort(vector<int>&arr) {
    
    for(int i = 0; i<arr.size()-1; i++){
        int minIndex = i; 
        for(int j = i+1; j<arr.size(); j++){
            if(arr[j] < arr[minIndex]) minIndex = j; 
        }
        swap(arr[i], arr[minIndex]); 
    }
    
}