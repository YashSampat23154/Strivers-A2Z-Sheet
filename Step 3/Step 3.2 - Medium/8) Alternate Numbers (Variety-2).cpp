// https://takeuforward.org/arrays/rearrange-array-elements-by-sign/

// In Variey-2, the number of positive and negative values may or may not be equal. 

vector<int> alternateNumbers(vector<int>&a) {
    vector<int> positive, negative, ans; 

    for(int i=0; i<a.size(); i++){
        if(a[i] > 0)
            positive.push_back(a[i]); 
        else
            negative.push_back(a[i]); 
    }

    int positiveIndex = 0, negativeIndex = 0; 
    bool turn = 1; 

    while(positiveIndex < positive.size() && negativeIndex < negative.size()){
        if(turn)
            ans.push_back(positive[positiveIndex++]);
        else 
            ans.push_back(negative[negativeIndex++]);

        turn = !turn; 
    }

    while(positiveIndex < positive.size())
        ans.push_back(positive[positiveIndex++]);

    while(negativeIndex < negative.size())
        ans.push_back(negative[negativeIndex++]);

    return ans; 

}