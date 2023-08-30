// https://www.codingninjas.com/studio/problems/superior-elements_6783446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
 
void insertLiner(vector<int> &ans, int element){
    ans.push_back(element); 
    int temp = element; 
    int i = ans.size()-2;
    for(; i>=0; i--){
        if(ans[i] > ans[i+1])
            ans[i+1] = ans[i]; 
        else 
            break;
    }
    ans[i+1] = temp;

}

vector<int> superiorElements(vector<int>&a) {
    vector<int> ans;        
    ans.push_back(a[a.size()-1]); 

    int maxTillNow = a[a.size()-1]; 
    for(int i = a.size()-2; i>=0; i--){
        if(a[i] > maxTillNow){
            insertLiner(ans, a[i]); 
            maxTillNow = a[i]; 
        }
    }

    return ans; 
}