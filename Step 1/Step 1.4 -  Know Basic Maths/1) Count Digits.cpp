// https://www.codingninjas.com/studio/problems/count-digits_8416387?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int countDigits(int n){

	int count = 0, temp = n; 

	while(temp != 0){
		int digit = temp%10; 
		if(digit!= 0 && n%digit == 0) count++; 
		temp = temp/10; 
	}

	return count; 	
}