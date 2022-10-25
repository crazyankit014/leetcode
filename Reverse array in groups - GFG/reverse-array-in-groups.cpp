//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    void reverseInGroups(vector<long long>& arr, int n, int k){
        for (int i = 0; i < n; i =i+k) 
        {
    reverse(arr.begin() + i, arr.begin() + i + min(k, n - i));
        } 
    
    
        // for(int i =0; i<n ; i++){
            
        //     int l = i;
        //     int r = i+k-1;
        //     while(l<r){
        //     swap(arr[l],arr[r]); 
        //     l++;
        //     r--;
        //     }
        //     i+=k;
            
        //     if(i+k-1 > n){
        //         swap(arr[n-1], arr[n-2]);
        //     }
        // }
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends