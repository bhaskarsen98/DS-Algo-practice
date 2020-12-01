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
typedef map<i64,i64> ml;
#define pb push_back
#define MOD 1000000007
#define debug puts("Q");
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
int main(){
    clock_t beg=clock();
    //fastio();
    int t;
    cin>>t;
    while(t--){
        i64 a,b;
        cin>>a>>b;
        ml m;
        m.clear();
        for(i64 i=1;i*i<=abs(a-b);i++){
            if(abs(a-b)%i==0){
                m[i]+=1;
                m[abs(a-b)/i]+=1;
            }
        }
        // for(auto i:m){
        //     cerr<<i.first<<" "<<i.second<<"\n";
        // }
        cout<<m.size()<<"\n";
    }
    
    
    
    clock_t end=clock(); 
    fprintf(stderr, "%lf sec\n", (double)(end-beg)/(CLOCKS_PER_SEC));
    return 0;
}