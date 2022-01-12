#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define ld long double
const int N = 1e9+1;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i11,n) for(int i11=0;i11<n;i11++)
#define inpdp(n) int xx,dp[n]; for(int i=0;i<n;i++) { cin>>xx; if(i) dp[i]=dp[i-1]+xx; else dp[i]=xx;}
#define inp(a,n)  { for(int ii=0;ii<n;ii++)  cin>>a[ii] ;}
#define inpdd(a,n,m) f(i1,n){f(j1,m) cin>>a[i1][j1];}
#define sumv(a,n,s) int s=0,a[n]; for(int i=0;i<n;i++) { cin>>a[i]; s+=a[i]; }
#define otp(a,n)  for(int i1=0;i1<n;i1++)cout<<a[i1]<<" ";
#define all(v) v.begin(),v.end()
#define mps make_pair
#define pb push_back
#define bp(n)       __builtin_popcount(n)
#define max1(a)      *(max_element(a.begin(),a.end()))
#define min1(a)      *(min_element(a.begin(),a.end()))
#define upi(a,n,xxx)  upper_bound(a,a+n,xxx)-a
#define ss second
#define ff first
#define sz(Xx) (ll)(Xx).size()
#define rs(a,n)   sort(a,a+n,greater<ll>())
#define trace1(x)      cerr<<#x<<": "<<x<<endl
#define trace2(x, y)   cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z) cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
const int MOD=1e9+7;

int32_t main()
{
    int a,b,c,n,x,t,num=0,cost=0;
    cin>>a>>b>>c;
    cin>>n;
    t=n;
    string s;
    vector <int> u, p;
    while(t--)
    {
        cin>>x>>s;
        if(s.compare("USB")==0) u.push_back(x);
        else p.pb(x);
    }
    sort(all(u));
    sort(all(p));
    int i=0,j=0;
    while(a>0 and i<u.size())
    {
        cost+=u[i];
        a--;
        num++;
        i++;
    }
    while(b>0 and j<p.size())
    {
        cost+=p[j];
        b--;
        num++;
        j++;
    }
    while(c>0 and i<u.size() and j<p.size())
    {
        if(u[i]<p[j])
            cost+= u[i++];
        else 
            cost+=p[j++];
        num++;
        c--;
    }
    while(c>0 and i<u.size())
    {
        cost+=u[i++];
        num++;
        c--;
    }
    while(c>0 and j<p.size())
    {
        cost+=p[j++];
        num++;
        c--;
    }
    cout<<num<<" "<<cost;
}