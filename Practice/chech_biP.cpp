
// check bipartite

#include<bits/stdc++.h>
using namespace std;

#define pb push_back

vector<vector<int>> g;
vector<int> part;
bool bi=0;

void dfs(int p,int c){
  part[p]=c%2+1;
  for(int i=0;i<g[p].size();i++){
    int e=g[p][i];
    if(part[e]==0)
      dfs(e,part[p]);
    else if(part[e]==part[p])
      bi=1;
    if(bi)return;
  }
}

int main(){

  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  #endif    

  int n,m;
  cin>>n>>m;

  g.resize(n);
  part.resize(n);
  fill(part.begin(),part.end(),0);

  for(int i=0,a,b;i<m;i++){
    cin>>a>>b;
    g[a-1].pb(b-1);
    g[b-1].pb(a-1);
  }

  for(int i=0;i<n;i++){
    if(part[i]==0){
      dfs(i,1);
    }
    if(bi){
      cout<<-1<<"\n";
      return 0;
    }
  }
  

  // print connected partites

  // int ct=0;
  // for(int i=0;i<n;i++)
  //   if(part[i]==1 && g[i].size()>0)ct+=1;
  // cout<<ct<<"\n";
  // for(int i=0;i<n;i++)
  //   if(part[i]==1 && g[i].size()>0)cout<<i+1<<" ";
  // ct=0;
  // for(int i=0;i<n;i++)
  //   if(part[i]==2 && g[i].size()>0)ct+=1;
  // cout<<"\n"<<ct<<"\n";
  // for(int i=0;i<n;i++)
  //   if(part[i]==2 && g[i].size()>0)cout<<i+1<<" ";





}