/*
    author:@bhaskar_8998
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<i64,i64> pll;
typedef map<i64,i64> ml;
#define pb push_back
#define MOD 1000000007
#define debug puts("Q");
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
 
int main() 
{ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    fastio();
    clock_t beg=clock();
    int t=0;
    cin>>t;
    while(t--){
      int n,m;
      cin>>n>>m;
      vector<vector<i64>> v(n,vector<i64>(m));
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
          cin>>v[i][j];
      }
      i64 ans=0;
      for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
          int r=0,c=0;
          for(int u=i-1,d=i+1;u>=0&&d<n;u--,d++){
            if(v[u][j]==v[d][j])c+=1;
            else break;
          }
          for(int l=j-1,rt=j+1;l>=0&&rt<m;l--,rt++){
            if(v[i][l]==v[i][rt])r+=1;
            else break;
          }
          ans+=min(r,c);
        }
      }  
      cout<<n*m+ans<<"\n";
    }
    clock_t end=clock(); 
    fprintf(stderr, "\n%lf sec\n", (double)(end-beg)/(CLOCKS_PER_SEC));

    return 0;
} 

