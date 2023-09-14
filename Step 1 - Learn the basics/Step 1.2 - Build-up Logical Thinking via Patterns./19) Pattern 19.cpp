// https://practice.geeksforgeeks.org/problems/double-triangle-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_19

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        
        // Top Pattern
        for(int i = 0; i<n; i++){
            
            // Star Pattern 
            for(int j = 0; j<n-i; j++)
                cout << "*"; 
            
            // Space Pattern
            for(int j = 0; j<2*i; j++)
                cout << " ";
            
            // Star Pattern
            for(int j = 0; j<n-i; j++)
                cout << "*";
            
            cout << endl;
        }
        
        // Bottom Pattern
        for(int i = 0; i<n; i++){
            
            // Star Pattern 
            for(int j = 0; j<=i; j++)
                cout << "*"; 
            
            // Space Pattern
            for(int j = 0; j<2*(n-i-1); j++)
                cout << " ";
            
            // Star Pattern
            for(int j = 0; j<=i; j++)
                cout << "*";
            
            cout << endl;
        }
        
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends