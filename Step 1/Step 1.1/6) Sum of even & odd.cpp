// https://www.codingninjas.com/studio/problems/sum-of-even-odd_624650?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<iostream>
using namespace std;

int main() {
	int n; cin>>n; 

	int esum = 0, osum = 0; 

	while(n!=0){
		if((n%10)%2 == 0)
			esum += n%10; 
		else 
			osum += n%10; 
		
		n = n/10;
	}

	cout << esum << " " << osum << endl;

	return 0; 
	
}
