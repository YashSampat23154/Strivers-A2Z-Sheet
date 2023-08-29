// No link

long long maxSubarraySum(vector<int> arr, int n)
{
    long long maxSum = 0, currSum = INT_MIN; 
    int start = 0, end = 0, finalStart = -1, finalEnd = -1;  
    for(int i = 0; i<arr.size(); i++){
        if(currSum + arr[i] > arr[i]){
            currSum = currSum + arr[i]; 
            end = i; 
        }
        else{
            currSum = arr[i]; 
            start = end = i; 
        }
        
        if(maxSum < currSum){
            maxSum = currSum; 
            finalStart = start; 
            finalEnd = end; 
        }
    }

    if(finalStart != -1)
    for(int i = finalStart; i<=finalEnd; i++)
        cout << arr[i] << " "; 
    cout << endl;

    return maxSum;
}