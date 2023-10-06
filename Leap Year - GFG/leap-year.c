//{ Driver Code Starts
//Initial Template for C

#include<stdio.h>


// } Driver Code Ends
//User function Template for C

int isLeap(int n){
 
 
  if(n%400 == 0) {
      return 1;
  }
  else if(n%4==0 && n%100 !=0)
  {
      return 1;
  }
  else 
  {
      return 0;
  }

    
    
    
}

//{ Driver Code Starts.

int main() 
{ 
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int N;
        scanf("%d", &N);
        printf("%d\n", isLeap(N));
    }
    return 0; 
}
// } Driver Code Ends