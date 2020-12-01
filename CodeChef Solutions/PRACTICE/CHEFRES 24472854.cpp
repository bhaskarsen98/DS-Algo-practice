#include<bits/stdc++.h>
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int l[n],u[n],ct2;
        for(int i=0;i<n;i++)cin>>l[i]>>u[i];
        sort(l,l+n);sort(u,u+n);
        for(int i=0;i<m;i++){
            cin>>ct2;
            auto ct=lower_bound(l,(l+n),ct2)-l;
            //cout<<&ct<<" "<<*ct<<" "<<ct<<"\n";
            if(ct==n&&ct2>=u[n-1]){cout<<-1<<"\n";continue;}
            //if(ct2<u[n-1]&&ct==n){cout<<0<<"\n";continue;}
            if(ct2==l[ct]){cout<<0<<"\n";continue;}
            if(ct==0){cout<<l[0]-ct2<<"\n";continue;}
            if(ct2>=u[ct-1]){cout<<l[ct]-ct2<<"\n";continue;}
            //if(ct2<u[n-1]&&ct==n){cout<<0<<"\n";continue;}
            else    {cout<<0<<"\n";continue;}
        }
    }
}

