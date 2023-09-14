https://www.codingninjas.com/studio/problems/search-in-a-2d-matrix_980531?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int lower = 0, higher = mat.size()*mat[0].size() - 1; 

    while(lower <= higher){
        int mid = lower + (higher - lower)/2; 

        if(mat[mid/mat[0].size()][mid%mat[0].size()] == target)
            return true; 
        else if (mat[mid/mat[0].size()][mid%mat[0].size()] < target)
            lower = mid + 1; 
        else 
            higher = mid - 1; 
    }

    return false; 
}