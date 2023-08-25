// https://www.codingninjas.com/studio/problems/hcf-and-lcm_840448?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int calcGCD(int n, int m){
    if(m == 0) return n; 
    return calcGCD(m, n%m); 
}
