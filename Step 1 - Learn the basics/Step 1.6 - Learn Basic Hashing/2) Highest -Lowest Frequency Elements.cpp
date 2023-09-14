// https://www.codingninjas.com/studio/problems/k-most-occurrent-numbers_625382?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

vector<int> getFrequencies(vector<int>& v) {
    
    unordered_map<int, int> mp; 

    for(auto i : v)
        mp[i]++; 
    
    int maxi = v[0], mini = v[0]; 
    
    for(auto ele : mp){
        if(ele.second > mp[maxi])
            maxi = ele.first;
        else if (ele.second == mp[maxi])
            maxi = min(ele.first, maxi); 

        if(ele.second < mp[mini])
            mini = ele.first;
        else if(ele.second == mp[mini])
            mini = min(ele.first, mini);  
    }

    return {maxi, mini}; 
}