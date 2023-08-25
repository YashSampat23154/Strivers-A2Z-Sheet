// https://www.codingninjas.com/studio/problems/count-frequency-in-a-range_8365446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> frequency(n, 0); 

    for(int i = 0; i<n; i++){
        if(nums[i]-1 < n)
            frequency[nums[i]-1]++; 
    }

    return frequency; 
}
