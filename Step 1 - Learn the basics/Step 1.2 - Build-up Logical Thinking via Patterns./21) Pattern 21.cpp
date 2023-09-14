// https://practice.geeksforgeeks.org/problems/square-pattern-1662287714/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_21

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        
        
        if(n == 1){
            cout << "*" << endl;
            return; 
        }
        
        for(int i = 0; i<n; i++)
            cout << "*";
        cout << endl;
        
        for(int i = 0; i<n-2; i++){
            cout << "*"; 
            for(int j = 0; j<n-2; j++)
                cout << " "; 
            cout << "*" << endl;
        }
        
        for(int i = 0; i<n; i++)
            cout << "*";
        cout << endl;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends