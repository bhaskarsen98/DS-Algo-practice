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
    clock_t beg=clock();
    //fastio();
    int t;
    cin>>t;
    while(t--){
        int f,delta,a,v;
        cin>>f>>delta>>a>>v;
	    i64 t1=(2*(f+delta))*(v*v);
	    i64 t2=(f*f)*a;
	    if(t1<=t2) cout<<"Tiger\n";
	    else cout<<"Bolt\n";
    }
    clock_t end=clock(); 
    fprintf(stderr, "%lf sec\n", (double)(end-beg)/(CLOCKS_PER_SEC));
    return 0;
}