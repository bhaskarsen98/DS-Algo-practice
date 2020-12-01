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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ct=0;
        for(int i=0;i<s.length();i++)if(s[i]=='1')ct+=1;
        if(ct%2==0||ct==0)cout<<"LOSE\n";
        else cout<<"WIN\n";
        
    }
    return 0;
}