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
    //fastio();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi l(n),r(n);
        int lsum=0,rsum=0;
        vi ans(n);
        string s;
        for(int i=0;i<n;i++){
            l[i]=0,r[i]=0;
            cin>>s;
            //cout<<s<<"\n";
            //cout.flush();
            for(int j=0;j<n;j++){
                if(s[j]=='1'){
                    if(j<n/2)l[i]+=1;
                    else     r[i]+=1;
                }
            }
            lsum+=l[i];rsum+=r[i];
        }
        //cout<<lsum<<" "<<rsum<<"\n";
        if(lsum==rsum){cout<<0<<"\n";continue;}
        else{
            int lsum_=0,rsum_=0;
            for(int i=0;i<n;i++){
                lsum_=lsum;rsum_=rsum;
                lsum_-=l[i];lsum_+=r[i];
                rsum_-=r[i];rsum_+=l[i];
                ans[i]=abs(lsum_-rsum_);
                //cout<<i<<" "<<ans[i]<<"\n";
            }
            sort(ans.begin(),ans.end());
            // cout<<"--";
            // for(int i=0;i<n;i++)cout<<ans[i]<<" ";
            cout<<ans[0]<<"\n";
        }
    }
    
    return 0;
}