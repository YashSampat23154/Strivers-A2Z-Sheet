// https://www.codingninjas.com/studio/problems/median-of-a-row-wise-sorted-matrix_1115473?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int countNumberLessthan(vector<vector<int>> &matrix, int value){
    int ans = 0; 
    for(int i= 0; i<matrix.size(); i++)
        ans += (upper_bound(matrix[i].begin(), matrix[i].end(), value) - matrix[i].begin());
    return ans; 
}

int median(vector<vector<int>> &matrix, int m, int n) {
    int lower = INT_MAX, higher = INT_MIN;
    for(int i= 0; i<matrix.size(); i++){
        lower = min(lower, matrix[0][i]);
        higher = max(higher, matrix[i][matrix[0].size()-1]);
    }
       
    int check = (m*n)/2; 

    while(lower <= higher){
        int mid = lower + (higher-lower)/2;

        if(countNumberLessthan(matrix, mid) <= check)
            lower = mid + 1; 
        else 
            higher = mid - 1; 
    }
    return lower; 
}