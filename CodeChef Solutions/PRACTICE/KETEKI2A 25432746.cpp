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
    //fastio();
    int n;
    cin>>n;
    int ct=n%2?(n+1)/2:n/2;
    long p(0),t(0);
    for(int i=1;i<=n;i++){
        int ct_;
        cin>>ct_;
        if(i<=ct)  p+=ct_;
        t+=ct_;
    }
    cout<<((t-p)-p);
    return 0;
}