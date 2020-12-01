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
i64 p2(i64 n)  
{  
    i64 p=1;  
    if (n&&!(n&(n-1)))  return n;  
    while(p<n)   p<<=1;  
    return p/2;  
}  
int main(){
    fastio();
    int t;
    cin>>t;
    int arr[]={0,1,1,2,3,5,8,3,1,4,5,9,4,3,7,0,7,7,4,1,5,6,1,7,8,5,3,8,1,9,0,9,9,8,7,5,2,7,9,6,5,1,6,7,3,0,3,3,6,9,5,4,9,3,2,5,7,2,9,1};
    cerr<<sizeof(arr)/sizeof(int)<<"\n";
    while(t--){
        i64 n;
        cin>>n;
        // i64 ct=(i64)log2(n);
        // n=(i64)pow(2,ct);
        // cerr<<n<<"\n";
        i64 ct=p2(n);
        cout<<arr[ct`-1]<<"\n";
    }
    return 0;
}