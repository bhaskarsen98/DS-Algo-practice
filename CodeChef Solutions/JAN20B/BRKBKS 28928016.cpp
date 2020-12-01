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
      int pwr;
      vi v(3,0);
      cin>>pwr>>v[0]>>v[1]>>v[2];
      vi p(3,0),s(3,0);
      p[0]=v[0];p[1]=p[0]+v[1];p[2]=p[1]+v[2];
      s[0]=v[2];s[1]=s[0]+v[1];s[2]=s[1]+v[0];
      int pp=0,ss=0;
      for(int i=0;i<3;i++){
        if(p[i]>pwr){
          pp+=1;
          for(int j=i;j<3;j++)p[j]-=p[i-1];
          i-=1;
        }
      }
      for(int i=0;i<3;i++){
        if(s[i]>pwr){
          ss+=1;
          for(int j=i;j<3;j++)s[j]-=s[i-1];
          i-=1;
        }
      }
      cout<<min(pp+1,ss+1)<<"\n";      
    }
    clock_t end=clock(); 
    fprintf(stderr, "\n%lf sec\n", (double)(end-beg)/(CLOCKS_PER_SEC));

    return 0;
} 

