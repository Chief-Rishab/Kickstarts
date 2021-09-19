#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

const int N= 1e5+5;
int32_t main()
{
    IOS;
	int n,m,u,v,w,curr,wt;
    cin>>n>>m;
    vector <int> parent(n+1,-1);
    vector <int> dist(n+1,1e18);
    vector <vector<pair<int,int>>> adjList(n+1);
    parent[1]=0;

    while(m--)
    {
    	cin>>u>>v>>w;
    	adjList[u].push_back({v,w});
    	adjList[v].push_back({u,w});
    }
    set <pair<int,int>> s;
    dist[1]=0;
    s.insert({0,1}); //dist,source
    while(!s.empty())
    {
    	curr=s.begin()->second;
    	s.erase(s.begin());
    	for(auto nbrPair: adjList[curr])
    	{
    		int nbr=nbrPair.first;
            wt=nbrPair.second;
    		if(dist[curr]+wt<dist[nbr])
    		{  
                s.erase({dist[nbr],nbr});
                parent[nbr]=curr;
    			dist[nbr]=dist[curr]+wt;
    			s.insert({dist[nbr],nbr});
    		}
    	}
    }
    
    if(parent[n]==-1) {cout<<-1; return 0;}
    vector <int> ans;
    curr=n;
    while(curr!=0)
    {
    	ans.push_back(curr);
    	curr=parent[curr];
    }
    reverse(ans.begin(),ans.end());
    for(auto i:ans)
    {
    	cout<<i<<" ";
    }
    return 0;
}