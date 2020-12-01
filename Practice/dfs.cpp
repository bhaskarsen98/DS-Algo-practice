//dfs for graph trail 1
//uses adjacency list(with weights)
//works if dfs produces forest

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
typedef pair<int,int> ii;
typedef vector<ii> vii;

vector<vii> adjl;
vector<bool> vis;
vector<vector<int>> forest;
vector<int> treee;

void dfs(int p){
  treee.pb(p);
  vis[p] = 1;
  for(int i=0; i<adjl[p].size(); i++){
    ii e = adjl[p][i];
    if(!vis[e.first])
      dfs(e.first);
  }
}

int main(){

  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  #endif    

  int n,e;
  cin>>n>>e;

  adjl.resize(n+1);
  vis.resize(n+1);
  fill(vis.begin(), vis.end(), 0);

  int start = 0;
  for(int i=0,a,b,w;i<n;i++){
    cin>>a>>b>>w;
    adjl[a].pb({b, w});
    adjl[b].pb({a, w});    
    start=a;
  }

  // dfs(7);
  for(int i=0;i<=n;i++){

    if(!vis[i]){
      treee.clear();
      dfs(i);
      forest.pb(treee);
    }
  }

  for(int i=0;i<n;i++){
    cout<<i<<" : ";
    for(int j=0;j<adjl[i].size();j++)
      cout<<adjl[i][j].first<<" ";
    cout<<"\n";
  }

  cerr<<"forest\n";
  for(auto i:forest){
    for(auto j:i)
      cerr<<j<<" ";
    cerr<<"\n";
  }

  cerr<<"\nvis\n";
  for(auto i:vis)
    cerr<<i<<" ";

}

// 8 6
// 0 1 1
// 1 3 1
// 3 2 1
// 3 4 1
// 6 8 1
// 6 7 1