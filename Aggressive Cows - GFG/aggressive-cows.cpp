//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
     
    
       int s=1,mid,ans;
       sort(stalls.begin(),stalls.end());
       int e=stalls[n-1]-stalls[0];
       while(s<=e)
       {
           mid=s+(e-s)/2;
           int count=1;
           int pos=stalls[0];
           for(int i=1;i<n;i++)
           {
               if(pos+mid<=stalls[i])
               {
                   count++;
                   pos=stalls[i];
               }
           }
           if(count<k)
           {
               e=mid-1;
           }
           else 
           {
               ans=mid;
               s=mid+1;
           }
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends