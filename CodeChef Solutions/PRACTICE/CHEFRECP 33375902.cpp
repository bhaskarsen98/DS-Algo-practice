#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int,int>pii;
#define all(A) (A).begin(),(A).end()
#define pb push_back
#define MOD 1000000007
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    fastio();
    clock_t beg=clock();
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      map<int,int> m;
      m.clear();
      vector<int> v;
      bool b=0;
      int j;
      cin>>j;
      v.pb(j);
      m[j]+=1;
      for(int i=1,j;i<n;i++){
        cin>>j;
        if(j!=*(v.end()-1)){
          if(m[j]){
            b=1;
            continue;
          }
          v.pb(j);
          m[j]+=1;
        }
        else{
          m[j]+=1;
        }
      }
      if(b){
        cout<<"NO\n";
        continue;
      }

      set<int> s;
      for(auto i:m){
        s.insert(i.second);
      }
      // cerr<<s.size()<<" "<<v.size()<<"\n";
      if(s.size()==v.size())cout<<"YES\n";
      else cout<<"NO\n";

    }
    clock_t end=clock(); 
    fprintf(stderr, "\n%lf sec\n", (double)(end-beg)/(CLOCKS_PER_SEC));
    return 0;
}


  