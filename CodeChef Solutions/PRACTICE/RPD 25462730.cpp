#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional>
using namespace __gnu_pbds; 
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;  
typedef long long i64;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int,int>pii;
#define pb push_back
#define MOD 1000000007
#define debug puts("Q");
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}

i64 sod(i64 n){
    i64 s=0;
    while(n){
        s+=n;
        n/=10;
    }
    return s;
}
int main(){
    //fastio();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        i64 v[n]={0};
        for(int i=0;i<n;i++) cin>>v[i];
        i64 ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                i64 ct=0;
                if(i!=j)
                     ct=sod(v[i]*v[j]);
                if(ans<ct)ans=ct;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}