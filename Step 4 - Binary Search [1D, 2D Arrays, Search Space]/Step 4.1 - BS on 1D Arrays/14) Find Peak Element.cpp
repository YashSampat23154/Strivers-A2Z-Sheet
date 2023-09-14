// https://www.codingninjas.com/studio/problems/find-peak-element_1081482?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int findPeakElement(vector<int> &arr) {
   if(arr[0] > arr[1]) return 0; 
   if(arr[arr.size()-1] > arr[arr.size()-2]) return arr.size()-1;

   int lower = 1, higher = arr.size()-1; 

   while(lower <= higher){
       int mid = lower + (higher - lower)/2; 

       if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) return mid; 

       else if (arr[mid-1] < arr[mid] && arr[mid] < arr[mid+1]) lower = mid + 1; 
       
       else higher = mid - 1; 
   }
   return -1; 
}
