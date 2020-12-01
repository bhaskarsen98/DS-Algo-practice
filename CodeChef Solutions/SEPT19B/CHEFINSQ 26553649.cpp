/*
    author:@bhaskar_8998
*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional>
using namespace __gnu_pbds; 
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;  
typedef unsigned long long i64;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int,int>pii;
#define pb push_back
#define MOD 1000000007
#define debug puts("Q");
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}

i64 ans(i64 deficit,i64 ini_deficit){  
    i64 ct=1;
    if(ini_deficit>deficit-ini_deficit)  ini_deficit=deficit-ini_deficit;
    for(i64 i=0;i<ini_deficit;++i){  
        ct*=(deficit-i);  
        ct/=(i+1);  
    }  
    return ct;  
}
int main(){
    fastio();
    i64 t;cin>>t;
    while(t--){
        i64 n;cin>>n;
        i64 k;cin>>k;
        vi v(n,0);
        for(auto &&i:v)cin>>i;
        sort(v.begin(),v.end());
        i64 ini_deficit=0;
        for(i64 i=k-1;;i--){
            if(v[i]==v[k-1])ini_deficit+=1;
            else break;
        }
        i64 deficit=0;
        for(i64 i=k;;i++){
            if(v[i]==v[k-1])deficit+=1;
            else break;
        }
        cerr<<deficit<<" "<<ini_deficit;
        deficit+=ini_deficit;
        cout<<ans(deficit,ini_deficit)<<"\n";
    }
}