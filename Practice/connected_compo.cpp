#include<bits/stdc++.h>
using namespace std;

#define pb push_back
typedef pair<int,int> ii;
typedef vector<ii> vi;

vector<vi> g;
vector<bool> vis;
vector<vector<int>> conco;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif		

	int v,e;
	cin>>v>>e;

	g.resize(v);
	vis.resize(v);
	fill(vis.begin(),vis.end(),0);

	for(int i=0,a,b,w;i<e;i++){				//assume 0 based vertices
		cin>>a>>b>>w;
		g[a].pb({b,w});
		g[b].pb({a,w});
	}

	vector<int> tree;
	queue<int> bfs;
	

	for(int k=0;k<v;k++){
		if(!vis[k]){
			tree.clear();
			bfs.push(k);
			vis[k]=1;
			while(!bfs.empty()){
				int u=bfs.front();
				bfs.pop();
				tree.pb(u);
				for(int i=0;i<g[u].size();i++){
					if(!vis[g[u][i].first]){
						vis[g[u][i].first]=1;
						bfs.push(g[u][i].first);
					}
				}
			}
			conco.pb(tree);
		}
		
	}

	cout<<"Concos "<<conco.size()<<"\n\n";
	for(auto i:conco){
		for(auto j:i)
			cout<<j<<" ";
		cout<<"\n";
	}

}


// 8 6
// 0 1 1
// 1 3 1
// 3 2 1
// 3 4 1
// 6 8 1
// 6 7 1