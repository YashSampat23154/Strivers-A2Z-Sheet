// https://www.codingninjas.com/studio/problems/square-root-integral_893351?leftPanelTab=0&utm_medium=website&utm_campaign=a_zcoursetuf

int floorSqrt(int n)
{
    int low = 0, high = n; 
    int ans = -1; 

    while(low <= high){
        long long mid = low + (high - low)/2; 

        if(mid*mid == n){
            ans = mid; 
            break;
        }
        else if (mid*mid < n){
            ans = mid; 
            low = mid + 1; 
        }
        else 
            high = mid - 1; 
    }
    return ans; 
}
