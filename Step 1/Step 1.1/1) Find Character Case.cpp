// https://www.codingninjas.com/studio/problems/find-character-case_58513?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include<iostream>
using namespace std;

int main() {
	
	char ch; 
	cin>>ch; 

	if(60 <= ch && ch <= 90)
		cout << 1 << endl;
	else if(97 <= ch && ch <= 122)
		cout << 0 << endl;
	else 
		cout << -1 << endl; 
        
}
