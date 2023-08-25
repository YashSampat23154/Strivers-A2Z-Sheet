// https://www.codingninjas.com/studio/problems/check-armstrong_589?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

bool checkArmstrong(int n){
	
	int nDigits = 0, temp = n; 

	while(temp!=0){
		nDigits++; 
		temp /= 10; 
	}
	
	int aNumber = 0;

	temp = n; 
	while(temp!=0){
		aNumber += pow(temp%10, nDigits);
		temp /= 10; 
	}

	return aNumber == n; 
}
