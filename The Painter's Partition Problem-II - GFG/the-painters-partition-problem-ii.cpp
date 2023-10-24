//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
        long long s=0,e=0,mid,ans;
        for(long long i=0;i<n;i++)
        {
            // s=max(arr[i]);
            if(s<arr[i])
              s=arr[i];
            e=e+arr[i];
        }
        
        while(s<=e)
        {
            mid=s+(e-s)/2;
            int painters=0;
            int count=1;
            
            for(long long i=0;i<n;i++)
            {
                painters=painters+arr[i];
                if(painters>mid)
                {
                    count++;
                    painters=arr[i];
                }
            }
            if(count<=k)
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

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends