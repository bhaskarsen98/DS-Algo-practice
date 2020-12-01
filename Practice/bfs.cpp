#include<bits/stdc++.h>
using namespace std;
#define INF 1000007
typedef pair<int,int> ii;
#define pb push_back
typedef vector<ii> vii;

vector<vii> adj;
vector<ii> d;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif		

	int v,e;
	cin>>v>>e;
	adj.resize(v);
	d.resize(v);
	fill(d.begin(),d.end(),make_pair(INF,0));

	for(int i=0,a,b,w;i<e;i++){
		cin>>a>>b>>w;
		adj[b].pb({a,w});
		adj[a].pb({b,w});
	}

	queue<int> q;
	q.push(5);
	d[5].first=0;
	d[5].second=5;

	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(auto i:adj[u]){
			ii ct=i;
			if(d[ct.first].first==INF){
				q.push(ct.first);
				d[ct.first].first=d[u].first+1;
				d[ct.first].second=u;
			}
		}
	}


	for(int i=0;i<v;i++)cout<<i<<" "<<d[i].first<<" "<<d[i].second<<"\n";



}


// 13 16
// 0 1 1
// 1 2 1
// 2 3 1
// 4 8 1
// 0 4 1
// 8 9 1
// 9 10 1
// 10 11 1
// 11 12 1
// 1 5 1
// 5 6 1
// 2 6 1
// 3 7 1
// 5 10 1
// 6 11 1
// 7 12 1