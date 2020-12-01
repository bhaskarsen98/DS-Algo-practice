//2
//00:09
#include<bits/stdc++.h>
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n,m;
        cin>>n>>m;
        vector<pair<long,long>> v(n);
        for(long i=0;i<n;i++)    cin>>v[i].second>>v[i].first;
        sort(v.begin(),v.end(),greater<>());
        //sort(v,v+n,greater<>());
        long long tot=v[0].first;
        for(long i=1;i<n;i++){
            //cout<<v[i].first<<"\n";
            if(v[i].second!=v[0].second){
                //cout<<v[i].first<<"\n";
                tot+=v[i].first;
                break;
            }
        }
        cout<<tot<<"\n";
    }
    
    return 0;
}
