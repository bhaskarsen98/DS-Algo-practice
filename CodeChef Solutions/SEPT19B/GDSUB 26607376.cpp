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
typedef long long i64;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int,int>pii;
#define pb push_back
#define MOD 1000000007
#define debug puts("Q");
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
int main(){
    fastio();
    i64 n,k;
    cin>>n>>k;
    map <i64,i64> freq;
    for(i64 i=0;i<n;i++){i64 ct=(cin>>ct,ct);freq[ct]+=1;}
    for(auto it=freq.begin();it!=freq.end();it++){cerr<<it->first<<" "<<it->second<<"\n";}
    cerr<<freq.size()<<" ";
    i64 dp[freq.size()+1][k+1];
    for(i64 i=0;i<=freq.size();i++)dp[i][0]=1;
    for(i64 i=0;i<=freq.size();i++){
        for(i64 j=1;j<=k;j++)
           dp[i][j]=0;
    }
    auto it=freq.begin();
    i64 ct=freq.size();
    k=min(k,ct);
    for(i64 i=1;i<=freq.size();i++,it++){
        for(i64 j=1;j<=k;j++){
            dp[i][j]=(dp[i-1][j]+((it->second)*dp[i-1][j-1])%MOD)%MOD;   
        }
    }
    i64 ans=0;   
    for(i64 i=0;i<=k;i++)ans=(ans+dp[freq.size()][i])%MOD;
    cout<<ans;
    return 0;
}