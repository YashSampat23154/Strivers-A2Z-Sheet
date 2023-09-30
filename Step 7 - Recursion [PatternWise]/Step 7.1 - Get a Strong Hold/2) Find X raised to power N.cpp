// https://www.codingninjas.com/studio/problems/find-x-raised-to-power-n-_626560?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

double myPowPos(double x, int n){
    if (n == 0) return 1; 

    double temp = myPowPos(x, n/2); 
    if(n&1)
        return x * temp * temp; 
    else 
        return temp * temp;
}

double myPow(double x, int n) {

    if(n > 0)
        return myPowPos(x, n); 
    else
        return 1/myPowPos(x, n);      
}