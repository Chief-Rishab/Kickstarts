// Div 3
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
const int N = 2e5 + 5;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i11,n) for(ll i11=0;i11<n;i11++)
#define inpdp(n) ll xx,dp[n]; for(ll i=0;i<n;i++) { cin>>xx; if(i) dp[i]=dp[i-1]+xx; else dp[i]=xx;}
#define inp(a,n)  { for(ll ii=0;ii<n;ii++)  cin>>a[ii] ;}
#define inpdd(a,n,m) f(i1,n){f(j1,m) cin>>a[i1][j1];}
#define sumv(a,n,s) ll s=0,a[n]; for(ll i=0;i<n;i++) { cin>>a[i]; s+=a[i]; }
#define otp(a,n)  for(ll i1=0;i1<n;i1++)cout<<a[i1]<<" ";
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
ll rvsr(ll n) {string s=to_string(n);  reverse(s.begin(),s.end());stringstream obj(s); obj>>n; return n; }
//ll power(ll x, ll y){ll res=1;x=x;while(y>0){if(y&1)res = (res*x);y = y>>1;x = (x*x);}return res;} 
ll logtwo(ll n){ if(n==1) return 0; return logtwo(n/2)+1;}
ll isprime(ll n ){for(ll c1 = 2; c1*c1 <= n ;c1++){    if(n%c1 == 0){return 0;}} return 1;}
ll twop(ll n) { ll x=0; while(n%2==0) {n/=2; x++;} return x;}

ll n,t;main()
{
    cin>>t;
    vector <ll> arr(1000);
    while(t--)
    {
        cin>>n;
        vector <ll> ans;
        string s1,s2,x;
        cin>>s1;
    //     ll cnt1=0;
    //     for(auto i:s1) if(i=='1') cnt1++;
    //     for(ll i=0;n-cnt1;i++) {x=to_string(i+1)+" "; if(s1[i]=='1') ans.append(x);}
    //     for(ll i=n-cnt1; i>=0 ;i--) { x=to_string(i+1)+" "; if(s1[i]=='0') ans.append(x);} 
    //     if(ans.size()/2>0) { cout<<1<<"\n"; cout<<ans<<"\n";}
    //     else cout<<0<<"\n";
    // } 
        s2=s1;
        ll d=0;
        sort(all(s2));
        ll f=0;
        for(ll i=0;i<n;i++)
        {
            if(s1[i]!=s2[i]) {d++; f=1; ans.pb(i+1);}
        }
        if(f) { cout<<1<<"\n"; cout<<d<<" ";
        f(i,ans.size()) cout<<ans[i]<<" ";
        cout<<"\n";
        }
        else { cout<<0<<"\n";}
    }
}