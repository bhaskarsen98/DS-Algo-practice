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
typedef unordered_map<long,long> ump_ll;
#define pb push_back
#define MOD 1000000007
#define debug puts("Q");
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vl v(n);
        i64 ans=0;
        for(int i=0;i<n;i++)cin>>v[i];
        vl xorc(n);
        set<long> key_;
        xorc[0]=v[0];
        key_.insert(xorc[0]);
        int ct=0;
        for(int i=1;i<n;i++){
            xorc[i]=xorc[i-1]^v[i];
            key_.insert(xorc[i]);
            if(xorc[i]==0)ct=1;
        }
        multimap<long,long> m;
        for(int i=0;i<n;i++){
            m.insert({xorc[i],i+1});
        }
        vector<long> ctr;
        for(auto i=key_.begin();i!=key_.end();i++){
            ctr.pb(m.count(*i));
        }
        long vitr=0,vitr0=m.count(0);
        for(auto i=key_.begin();i!=key_.end();i++){
            long ct_=1,ans_=0;
            if(*i==0)vitr0=vitr;
            for(auto j=m.equal_range(*i).first;j!=m.equal_range(*i).second;j++){
                ans_+=((ct_-1))*((*j).second)-((ctr[vitr]-ct_))*((*j).second);
                ct_+=1;    
            }
            ans_-=(((ctr[vitr])*(ctr[vitr]-1))/2);
            vitr+=1;
            ans+=ans_;
        }
        //cout<<ans<<" ";
        if(ct==1){
            //cout<<"Q"<<" "<<vitr0;
            long ct_=1,ans_=0;
            for(auto j=m.equal_range(0).first;j!=m.equal_range(0).second;j++){
                ans_+=((*j).second);
                ct_+=1;    
            }
            
            ans_-=ct_-1;
            ans+=ans_;
        }
        cout<<ans<<"\n";
    }   
    return 0;
}