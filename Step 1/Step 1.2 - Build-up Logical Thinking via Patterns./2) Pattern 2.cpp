// https://practice.geeksforgeeks.org/problems/right-triangle/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_2

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<=i; j++)
                cout << "* "; 
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