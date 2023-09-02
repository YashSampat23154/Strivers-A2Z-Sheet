// https://www.codingninjas.com/studio/problems/three-sum_6922132?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include <set>

vector<vector<int>> triplet(int n, vector<int> &arr)
{
    set<vector<int>> checkUniqueness;
    vector<vector<int>> ans; 
    sort(arr.begin(), arr.end()); 

    for(int i =0; i<arr.size()-2; i++){
        int firstValue = arr[i]; 

        if(firstValue > 0) break;

        int lower = i+1, higher = arr.size()-1; 
        while(lower < higher){
            if(arr[i] + arr[lower] + arr[higher] == 0){
                if(checkUniqueness.count({arr[i], arr[lower], arr[higher]}) == 0){
                    checkUniqueness.insert({arr[i], arr[lower], arr[higher]}); 
                    ans.push_back({arr[i], arr[lower], arr[higher]});
                }
                lower++;
            }
            else if(arr[i] + arr[lower] + arr[higher] < 0)
                lower++; 
            else
                higher--; 
        }
    }
    return ans;   
}
