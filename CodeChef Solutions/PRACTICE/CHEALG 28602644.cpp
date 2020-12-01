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
typedef pair<i64,i64> pll;
typedef map<i64,i64> ml;
#define pb push_back
#define MOD 1000000007
#define debug puts("Q");
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    fastio();
    clock_t beg=clock();
    int t=1;
    cin>>t;
    while(t--){
        string s,f;
        cin>>s;
        int n=s.length();
        n+=1;
        s+=1;
        int ct=0;
        if(n==1){
            f.append(s);
            f+='1';
        }
        else{
            for(int i=1;i<n;i++){
                if(s[i-1]==s[i]) ct+=1;
                else{
                    ct+=1;
                    string ss=to_string(ct);
                    f+=s[i-1];
                    f.append(ss);
                    ct=0;
                }
            }
        }
        //f+='\0';
        n-=1;
        if(f.length()<n)cout<<"YES\n";
        else cout<<"NO\n";
    }
    clock_t end=clock(); 
    fprintf(stderr, "%lf sec\n", (double)(end-beg)/(CLOCKS_PER_SEC));
    return 0;
}