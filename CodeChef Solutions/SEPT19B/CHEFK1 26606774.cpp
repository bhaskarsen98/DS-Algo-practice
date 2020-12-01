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
    int t;
    cin>>t;
    while(t--){
        //cout<<t<<": ";
        i64 n,m;
        cin>>n>>m;
        if(m==1&&(n==1||n==2)){cout<<1<<"\n";continue;}
        else if(n==1&&m>1){cout<<-1<<"\n";continue;}
        else if(n==1&&m==0){cout<<0<<"\n";continue;}
        else if((m>(n*(n+1))/2) || (n>1&&m<n-1) || (n>1&&m==0)){cout<<-1<<"\n";continue;}
        else{
            if(m>=n-1 && m<=n+1){cout<<2<<"\n";continue;}
            if(m>n+1 && m<=2*n){cout<<3<<"\n";continue;}
            else {
                cout<<3+ceil(double(2*(m-2*n))/n)<<"\n";continue;
            }
        }
    }
    return 0;
}