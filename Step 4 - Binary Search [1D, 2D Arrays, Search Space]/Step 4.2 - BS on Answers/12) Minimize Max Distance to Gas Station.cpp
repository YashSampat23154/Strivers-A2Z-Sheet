// https://www.codingninjas.com/studio/problems/minimise-max-distance_7541449?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int checkDist(vector<int> &arr, double minDist){
	int totalAddedGasStation = 0;

	for(int i = 1; i<arr.size(); i++)
		totalAddedGasStation += ceil((arr[i]-arr[i-1])/minDist) - 1;

	return totalAddedGasStation; 
}	

double minimiseMaxDistance(vector<int> &arr, int k){
	double lower = 0; 
	double higher = arr[arr.size()-1];

	while(higher - lower > 1e-6){
		double mid = lower + (higher - lower)/2;

		if(checkDist(arr, mid) > k)
			lower = mid; 
		
		else 
			higher = mid; 
	}	

	return higher; 
}