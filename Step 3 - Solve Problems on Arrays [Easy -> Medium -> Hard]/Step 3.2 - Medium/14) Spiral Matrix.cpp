// https://www.codingninjas.com/studio/problems/spiral-matrix_6922069?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    int top = 0, right = MATRIX[0].size()-1; 
    int bottom = MATRIX.size()-1, left = 0; 

    vector<int> ans; 
    int count = MATRIX.size()*MATRIX[0].size(); 

    while(count > 0){

        // top row
        for(int i = left; i<=right; i++){
            ans.push_back(MATRIX[top][i]); 
            count--; 
        }
        top++; 
        

        if(count <= 0) break;
        // rightmost coln
        for(int i = top; i<=bottom; i++){
            ans.push_back(MATRIX[i][right]); 
            count--; 
        }
        right--;


        if(count <= 0) break;
        // bottom row
        for(int i = right; i>=left; i--){
            ans.push_back(MATRIX[bottom][i]); 
            count--; 
        }
        bottom--;


        if(count <= 0) break;
        // leftmost coln
        for(int i = bottom; i>=top; i--){
            ans.push_back(MATRIX[i][left]);
            count--;  
        }
        left++;
    }

    return ans;

}