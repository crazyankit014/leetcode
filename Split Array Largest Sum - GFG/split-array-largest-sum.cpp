//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int splitArray(int arr[] ,int N, int K) {
        int s=0,e=0,ans,mid;
        for(int i=0;i<N;i++)
        {
            s=max(s,arr[i]);
            e=e+arr[i];
        }
        while(s<=e)
        {
            mid=s+(e-s)/2;
            int sum=0;
            int count=1;
            for(int i=0;i<N;i++)
            {
                sum=sum+arr[i];
                if(sum>mid)
                {
                    count++;
                    sum=arr[i];
                }
            }
            if(count<=K)
            {
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends