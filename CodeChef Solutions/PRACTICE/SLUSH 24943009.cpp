//3
//00:40
#include<bits/stdc++.h>
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n,m;
        cin>>n>>m;
        vector<pair<long,long>> c(m);
        long d[n];
        long b[n],f[n];
        for(int i=0;i<m;i++){
            cin>>c[i].first;
            c[i].second=i;
        }
        
        long arr[n]={0},p=0;
        for(int i=0;i<n;i++){
            cin>>d[i]>>f[i]>>b[i];
            if(c[d[i]-1].first>0){c[d[i]-1].first-=1;p+=f[i];arr[i]=d[i];}
        }
        sort(c.begin(),c.end(),greater<>());
        int m_=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                c[m_].first-=1;p+=b[i];
                arr[i]=c[m_].second+1;
                if(c[m_].first==0)
                m_+=1;
            }
        }
        cout<<p<<"\n";
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<"\n";
        }
    
    return 0;
}
