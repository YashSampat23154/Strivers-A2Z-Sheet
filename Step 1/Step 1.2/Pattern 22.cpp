// https://practice.geeksforgeeks.org/problems/square-pattern-1662666141/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_22

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        
        // Top Pattern
        for(int i = 0; i<n; i++){
            
            int j = n;
            // Print Decrease
            for(; j>(n-i); j--)
                cout << j << " "; 
            
            // Print Constant
            for(int k = 0; k<2*(n-i)-2; k++)
                cout << j << " ";
            
            // Print Increase
            for(; j<=n; j++)
                cout << j << " ";
                
            cout << endl;
        }
        
        // Bottom Pattern
        for(int i = n-2; i>=0; i--){
            
            int j = n;
            // Print Decrease
            for(; j>(n-i); j--)
                cout << j << " "; 
            
            // Print Constant
            for(int k = 0; k<2*(n-i)-2; k++)
                cout << j << " ";
            
            // Print Increase
            for(; j<=n; j++)
                cout << j << " ";
                
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends