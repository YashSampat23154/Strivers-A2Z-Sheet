// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718013/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_10

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        
        // Top Pattern
        for(int i=1; i<=n; i++){
            for(int j = 1; j<=i; j++)
                cout << "* "; 
            cout << endl;
        }
        
        // Bottom Pattern
        for(int i=n-1; i>0; i--){
            for(int j = 1; j<=i; j++)
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