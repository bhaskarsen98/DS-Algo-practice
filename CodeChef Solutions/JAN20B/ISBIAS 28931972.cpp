/*
    author:@bhaskar_8998
*/
#include<bits/stdc++.h> 
using namespace std;
typedef long long i64;
typedef vector<int> vi;
typedef vector<i64> vl;
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
    i64 n,q;
    cin>>n>>q;
    vl v(n);
    for(i64 i=0;i<n;i++)cin>>v[i];
    while(q--){
        i64 l,r;
        cin>>l>>r;
        ((v[l-1]<v[l]&&v[r-2]>v[r-1]) || (v[l-1]>v[l]&&v[r-2]<v[r-1]))?cout<<"YES\n":cout<<"NO\n";
    }    
    clock_t end=clock(); 
    fprintf(stderr, "\n%lf sec\n", (double)(end-beg)/(CLOCKS_PER_SEC));
    return 0;
} 

