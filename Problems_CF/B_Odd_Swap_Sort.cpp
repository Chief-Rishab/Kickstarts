#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 5e5+1;
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
#define sz(Xx) (int)(Xx).size()
#define rs(a,n)   sort(a,a+n,greater<int>())
#define trace1(x)      cerr<<#x<<": "<<x<<endl
#define trace2(x, y)   cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z) cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
const int MOD=1e9+7;
// int rvsr(int n) {string s=to_string(n);  reverse(s.begin(),s.end());stringstream obj(s); obj>>n; return n; }
// int logtwo(int n){ if(n==1) return 0; return logtwo(n/2)+1;}
// int isprime(int n ){for(int c1 = 2; c1*c1 <= n ;c1++){    if(n%c1 == 0){return 0;}} return 1;}
// int twop(int n) { int x=0; while(n%2==0) {n/=2; x++;} return x;}
#define vi(a,n) vector <int> a(n,0);
int power(int x, int y)
{
    int res=1;
    while(y>0)
    {
        if(y&1)
        res = (res*x);
        y = y>>1;
        x = (x*x);
    }
        return res;
} 
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int32_t main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int last_o=0,last_e=0,f=1;
        vi(a,n);
        inp(a,n);
        f(i,n)
        {
            if(a[i]%2==1 and a[i]<last_o) f=0;
            if(a[i]%2==0 and a[i]<last_e) f=0;

            if(a[i]%2)
            last_o =a[i];
            else
            last_e=a[i];
        }
        if(f) cout<<"Yes\n";
        else cout<<"No\n";
    }
}