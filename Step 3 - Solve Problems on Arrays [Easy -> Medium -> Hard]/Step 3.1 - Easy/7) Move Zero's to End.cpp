// https://www.codingninjas.com/studio/problems/ninja-and-the-zero-s_6581958?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

vector<int> moveZeros(int n, vector<int> a) {
    int zeroIndex = 0; 

    for(int i = 0; i<a.size(); i++){
        if(a[i] != 0)
            swap(a[zeroIndex++], a[i]); 
    }

    return a; 
}
