// https://www.codingninjas.com/studio/problems/find-peak-element_7449073?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

vector<int> findPeakGrid(vector<vector<int>> &g){
    int lower = 0, higher = g.size()-1; 

    while(lower <= higher){
        int mid = lower + (higher - lower)/2; 

        int coln = -1, maxi = -1; 
        for(int i = 0; i<g[0].size(); i++)
            if(maxi < g[mid][i]){
                maxi = g[mid][i]; 
                coln = i; 
            }
        
        if(mid + 1 < g.size() && g[mid+1][coln] >= g[mid][coln]){
            lower = mid + 1; 
            continue; 
        }
        else if(mid - 1 >= 0 && g[mid-1][coln] >= g[mid][coln]){
            higher = mid - 1; 
            continue;
        }

        return {mid, coln}; 
    }    

    return {-1, -1}; 
}