// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285911/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_17

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        
        for(int i = 0; i<n; i++){
            
            // Extra spaces
            for(int j = 0; j<n-i-1; j++)
                cout << " "; 
            
            // Alphabet Pattern
            char j = 'A'; 
            for(; j<='A'+i; j++)
                cout << j;
            
            for(j-=2; j>='A'; j--)
                cout << j; 
                
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