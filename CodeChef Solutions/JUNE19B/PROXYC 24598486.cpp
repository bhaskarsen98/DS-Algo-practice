#include<bits/stdc++.h>
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
using namespace std;
int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int ctr=0,ctr_=0;
        vector<pair<char,int>> iphasher(d);
        for(int i=0;i<d;i++){
            cin>>iphasher[i].first;
            if(iphasher[i].first=='P'){  iphasher[i].second=1;ctr+=1;}
            else    iphasher[i].second=0;
        }
        int req=ceil(.75*d);
        if(ctr>=req){cout<<0<<"\n";continue;}
        for(int i=2;i<d-2;i++){
            if((iphasher[i-1].second==1||iphasher[i-2].second==1)&&(iphasher[i+1].second==1||iphasher[i+2].second==1)&&iphasher[i].second==0)
            {
                ctr_+=1;
            }
            if(ctr_==req-ctr)break;
        }
        if(ctr_<req-ctr)ctr_=-1;
        cout<<ctr_<<"\n";
    }
        


    return 0;
}
