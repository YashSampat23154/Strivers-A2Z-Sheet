// https://www.codingninjas.com/studio/problems/minimum-rate-to-eat-bananas_7449064?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int calcHour(vector<int> v, long long currM, int h){

    int totalHr = 0; 

    for(int i = 0; i<v.size(); i++){
        totalHr += v[i]/currM + (v[i]%currM == 0? 0 : 1);
        if(totalHr > h) return totalHr;  
    }
    
    return totalHr; 
}  

int minimumRateToEatBananas(vector<int> v, int h) {
    long long lower = 1, higher = accumulate(v.begin(), v.end(), 0LL);
    int ans = -1; 

    while(lower <= higher){
        long long mid = lower + (higher - lower)/2; 

        if(calcHour(v, mid, h) <= h){
            ans = mid;
            higher = mid-1; 
        }
        else 
            lower = mid + 1; 
    }

    return ans; 
}