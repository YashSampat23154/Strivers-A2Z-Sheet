// https://www.codingninjas.com/studio/problems/alternate-numbers_6783445?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

// In Variey-1, the number of positive and negative values are equal. 

vector<int> alternateNumbers(vector<int>&a) {
    vector<int> ans(a.size()); 
    int positiveIndex = 0, negativeIndex = 1; 

    for(int i=0; i<a.size(); i++){
        if(a[i] > 0){
            ans[positiveIndex] = a[i]; 
            positiveIndex+=2; 
        }
        else{
            ans[negativeIndex] = a[i]; 
            negativeIndex+=2; 
        }
            
    }

    return ans; 

}