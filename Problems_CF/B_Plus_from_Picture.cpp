#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    bool visited[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            visited[i][j]=false;
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<m-1;j++)
        {
            if(arr[i][j]=='*' && arr[i-1][j]=='*' && arr[i][j-1]=='*' && arr[i+1][j]=='*' && arr[i][j+1]=='*')
            {
                visited[i][j]=true;
                int l=j,r=j,u=i,d=i;
                while(l>=0 and arr[i][l]=='*') visited[i][l--]=true;
                while(r<m and arr[i][r]=='*') visited[i][r++]=true;
                while(u>=0 and arr[u][j]=='*') visited[u--][j]=true;
                while(d<n and arr[d][j]=='*') visited[d++][j]=true;

                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<m;j++)
                    {
                        if(visited[i][j]!=true and arr[i][j]=='*')
                        {cout<<"NO";
                        return 0;}
                    }
                }
                cout<<"YES";
                return 0;
            } 
        }
    }
    cout<<"NO";
    return 0;
}