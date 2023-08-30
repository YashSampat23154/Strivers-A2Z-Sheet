// https://www.codingninjas.com/studio/problems/longest-successive-elements_6811740?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

int longestSuccessiveElements(vector<int>&a) {
    sort(a.begin(), a.end()); 

    int noDups = 0; 
    for(int i = 1; i<a.size(); i++){
        if(a[i] != a[noDups])
            a[++noDups] = a[i]; 
    }

    int start = 0, maxiLength = 1;  
    for(int i = 1; i<=noDups; i++){
        if(a[i] - a[i-1] != 1)
            start = i; 

        maxiLength = max(maxiLength, i-start+1); 
    }
     
    return maxiLength; 
}