// https://practice.geeksforgeeks.org/problems/pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_9

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        
        // Top Pattern
        for(int i = 1; i<=n; i++){
            
            // Extra Spaces
            for(int j = 0; j<n-i; j++)
                cout << " "; 
                
            // Star Pattern 
            for(int j = 0; j<2*i-1; j++){
                if(j%2 == 0) cout << "*"; 
                else cout << " "; 
            }
            
            cout << endl;
            
        }
        
        // Bottom Pattern
        for(int i = n; i>0; i--){
            
            // Extra Spaces
            for(int j = 0; j<n-i; j++)
                cout << " "; 
                
            // Star Pattern 
            for(int j = 0; j<2*i-1; j++){
                if(j%2 == 0) cout << "*"; 
                else cout << " "; 
            }
            
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends