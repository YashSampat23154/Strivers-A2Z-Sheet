// https://www.codingninjas.com/studio/problems/row-of-a-matrix-with-maximum-ones_982768?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int ans = -1; 
    int row = 0, coln = m-1; 

    while(row < n && coln >= 0){
        if(matrix[row][coln] == 1){
            ans = row; 
            coln--; 
        }
        else
            row++; 
    }

    return ans;
}