#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long 

const int N=1e9; 

int32_t main()
{
    IOS;
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    //vector <int> dp(N,0); 
    map <int,int> dp;
    int ans=0,big=-1; 
    for(int i=0;i<n;i++)
    {
        dp[a[i]]=dp[a[i]-1]+1;
        if(ans<dp[a[i]])
        {
            ans=dp[a[i]];
            big=a[i];
        }
    }
   cout<<ans<<"\n";
   int start=big-ans+1;
   for(int i=0;i<n and start<=big;i++)
   {
       if(a[i]==start)
       {
           cout<<(i+1)<<" ";
           start++;
       }
   }
   return 0;
}