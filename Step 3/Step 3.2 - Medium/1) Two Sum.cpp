// https://www.codingninjas.com/studio/problems/reading_6845742?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

string read(int n, vector<int> book, int target)
{
    unordered_map<int, int> mp; 
    string ans = "NO"; 
    for(auto ele : book){
        if(mp.find(target-ele) != mp.end()){
            ans = "YES"; 
            break; 
        }
        mp[ele]++; 
    }

    return ans;

}
