// https://www.codingninjas.com/studio/problems/check-prime_624934?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

bool isPrime(int n)
{ 
	if(n == 2 || n == 3) return true; 
	if(n == 1 || n%2 == 0 || n%3 == 0) return false; 

	for(int i = 5; i*i<n; i+=6){
		if(n%(i) == 0 || n%(i+2) == 0) return false; 
	}

	return true; 
}