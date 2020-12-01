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
bool parity(i64 n) 
{ 
    i64 s=n^(n>>1); 
    s=s^(s>>2); 
    s=s^(s>>4); 
    s=s^(s>>8); 
    s=s^(s>>16); 
    if(s&1) 
        return 1;//o 
    return 0; 
} 
int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        vl ind(1000001,-1),s,indr(1000001,-1);
        //ind[i]>=0:element i is present in set(via a^b or query)
        //indr[i]>=0:element i isn't encountered in any query
        i64 e=0,o=0,d=0;
        i64 q;
        cin>>q;
        while(q--){
            i64 n;
            cin>>n;
            if(n==d){
                cout<<e<<" "<<o<<"\n";
                cout.flush();
                continue;
            }
            if(indr[n]==-1){
                if(ind[n]>=0){
                    cout<<e<<" "<<o<<"\n";
                    continue;
                }
                indr[n]=s.size();
                if(ind[n]==-1){
                    ind[n]=s.size();
                    s.pb(n);
                    if(parity(n))o+=1;
                    else    e+=1;
                }
                for(i64 i=0;i<indr[n];i++){
                    i64 ct=s[i]^n;
                    if(ind[ct]==-1&&ct!=0){
                        ind[ct]=s.size();
                        s.pb(ct);
                        if(parity(ct))  o+=1;
                        else    e+=1;
                    }
                }
            }
            else{
                int fin=s.size();
                for(i64 i=indr[n];i<fin;i++){
                    i64 ct=s[i]^n;
                    if(ind[ct]==-1&&ct!=0){
                        ind[ct]=s.size();
                        s.pb(ct);
                        if(parity(ct))  o+=1;
                        else    e+=1;
                    }
                }
                indr[n]=fin-1;
            }
            //for(int i=0;i<s.size();i++)cout<<s[i]<<" ";
            //cout<<"\n";
            d=n;
            cout<<e<<" "<<o<<"\n";
            cout.flush();
        }
    }
    
    return 0;
}