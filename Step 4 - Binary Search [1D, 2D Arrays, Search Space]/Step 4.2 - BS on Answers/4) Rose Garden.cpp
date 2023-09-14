// https://www.codingninjas.com/studio/problems/rose-garden_2248080?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int calcAdjacentRoses(vector<int> &arr, int currDay, int k){

	int totalBouquets = 0;
	int fCount = 0; 
	
	for(int i = 0; i<arr.size(); i++){
		if(arr[i] > currDay)
			fCount = 0;
	
		else
			fCount++; 

		if(fCount >= k){
			totalBouquets++; 
			fCount = 0;
		}
	}

	return totalBouquets; 

}

int roseGarden(vector<int> arr, int k, int m)
{	
	int lower = 1, higher = *max_element(arr.begin(), arr.end());
    int ans = -1; 

    while(lower <= higher){
        int mid = lower + (higher - lower)/2; 

        if(calcAdjacentRoses(arr, mid, k) >= m){
            ans = mid;
            higher = mid-1; 
        }
        else 
            lower = mid + 1; 
    }

    return ans; 
}