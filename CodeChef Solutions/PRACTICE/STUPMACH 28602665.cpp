#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int,int> pii;
typedef pair<i64 ,i64> pll;
#define F first
#define S second
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
    int t=1;
    cin>>t;
    while(t--){
        i64 n,ct=MOD,ans=0,ip;
        cin>>n;
        for(i64 i=0;i<n;i++){
            cin>>ip;
            ct=min(ct,ip);
            ans+=ct;
        }
        cout<<ans<<"\n";
    }
    clock_t end=clock(); 
    fprintf(stderr, "%lf sec\n", (double)(end-beg)/(CLOCKS_PER_SEC));
    return 0;
}