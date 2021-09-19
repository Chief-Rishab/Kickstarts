// Div 3 481F
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ceil_search(vector <int> &b,int s,int e,int target,int &ans)
{
    if(s>e) return;
    int mid=s+(e-s)/2;
    if(b[mid]<target)
    {
        ans=max(ans,mid);
        ceil_search(b,mid+1,e,target,ans);
    }
    else{
        ceil_search(b,s,mid-1,target,ans);
    }
    return;
}
int32_t main()
{
    IOS;
    int n,q,u,v;
    cin>>n>>q;
    vector <int> arr(n),precompute(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector <int> b(arr);
    sort(b.begin(),b.end());
    for(int i=0;i<q;i++)
    {
        cin>>u>>v;
        // Array positions of quarreling members
        u--; v--;
        int x=arr[u],y=arr[v];
        if(x==y) continue;
        if(x>y) swap(u,v);
        precompute[v]--;
    }
    for(int i=0;i<n;i++)
    {
        int pos=-1;
        ceil_search(b,0,n-1,arr[i],pos);
        precompute[i]+=(1+pos);
    }
    for(int i=0;i<n;i++)
    {
      cout<<precompute[i]<<" ";
    }
    return 0;
}
