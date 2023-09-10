// https://www.codingninjas.com/studio/problems/smallest-divisor-with-the-given-limit_1755882?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

bool checkThreshold (vector<int>& arr, int divisor, int limit){
	long long totalSum = 0; 

	for(int i =0; i<arr.size(); i++)
		totalSum += ceil((double)arr[i]/divisor);
	

	if(totalSum <= limit) return 1; 
	else return 0; 
}

int smallestDivisor(vector<int>& arr, int limit)
{
	int lower = 1, higher = *max_element(arr.begin(), arr.end());
	int ans = -1; 

	while(lower<=higher){
		int mid = lower + (higher - lower)/2; 

		if(checkThreshold(arr, mid, limit)){
			ans = mid; 
			higher = mid - 1; 
		}
		else
			lower = mid + 1; 
	}
}