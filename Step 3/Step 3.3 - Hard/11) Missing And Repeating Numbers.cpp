// https://www.codingninjas.com/studio/problems/missing-and-repeating-numbers_6828164?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int pXorq = 0;
    for(int i = 0; i<a.size(); i++)
        pXorq ^= (a[i]^(i+1));

    int bitDifference = pXorq&(~(pXorq-1));

    int p = 0, q = 0; 

    for(int i = 0; i<a.size(); i++){
        if(((i+1)&bitDifference) == 0) p^=(i+1);
        else q^=(i+1); 
        if((a[i]&bitDifference) == 0) p^=a[i];
        else q^=a[i]; 
    }

    int count = 0;
    for(int i = 0; i<a.size(); i++)
        if(a[i] == p) count++; 

    if(count == 2)
        return {p,q};
    else 
        return {q,p}; 
}