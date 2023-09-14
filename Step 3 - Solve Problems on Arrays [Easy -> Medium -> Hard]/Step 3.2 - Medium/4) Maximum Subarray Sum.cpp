// https://www.codingninjas.com/studio/problems/maximum-subarray-sum_630526?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

long long maxSubarraySum(vector<int> arr, int n)
{
    long long maxSum = 0, currSum = INT_MIN; 
    for(int i = 0; i<arr.size(); i++){
        currSum = max(currSum+arr[i], (long long)arr[i]); 
        maxSum = max(maxSum, currSum); 
    }

    return maxSum;
}