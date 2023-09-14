// https://www.codingninjas.com/studio/problems/nth-root-of-m_1062679?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

long long power(int x, int n, int m){
  if(n == 0) return 1; 
  
  long long temp = power(x, n/2, m);
  
  if(temp > m) return temp; 

  if(temp*temp > 1e9)
    return m+1; 

  long long check = 0;

  if(n%2 == 0)
    return temp * temp; 
  else 
    return temp * temp * x; 
}

int NthRoot(int n, int m) {
  int lower = 0, higher = m; 

  while(lower <= higher){
    int mid = lower + (higher - lower)/2; 

    long long nthMultiple = power(mid, n, m);

    if(nthMultiple == m) return mid; 
    else if (nthMultiple > m) higher = mid - 1; 
    else lower = mid + 1; 
  } 

  return -1; 
}