// https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int maxiFirst = -1, maxiSecond = -1, miniFirst = INT_MAX, miniSecond = INT_MAX;

    for (auto ele : a){
        
        if(maxiFirst < ele){
            maxiSecond = maxiFirst;
            maxiFirst = ele;
        }
        else{
            maxiSecond = max(maxiSecond, ele);
        }

        if(miniFirst > ele){
            miniSecond = miniFirst;
            miniFirst = ele;
        }
        else{
            miniSecond = min(miniSecond, ele);
        }
    }

    return {maxiSecond, miniSecond};
}
