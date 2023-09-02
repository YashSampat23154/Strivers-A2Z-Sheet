// https://www.codingninjas.com/studio/problems/print-pascal-s-triangle_6917910?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

// Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle.

vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> ans(N, vector<int>()); 
    ans[0].push_back(1); 
    
    for(int i = 1; i<N; i++){
        ans[i].push_back(1); 
        for(int j = 1; j<ans[i-1].size(); j++){
            int sum = ans[i-1][j-1] + ans[i-1][j];
            ans[i].push_back(sum); 
        }
        ans[i].push_back(1);
    }

    return ans; 
}