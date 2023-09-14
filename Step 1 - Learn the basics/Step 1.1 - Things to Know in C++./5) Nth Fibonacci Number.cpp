// https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n; cin>>n; 
        
        if(n == 1) cout << 1 << endl;  
        else if (n == 2) cout << 2 << endl; 
        else{
                int a = 1, b = 2, c; 
                
                for(int i = 3; i<n; i++){
                        c = a+b; 
                        a = b; 
                        b = c; 
                }

                cout << c << endl;
        }

        return 0; 
}