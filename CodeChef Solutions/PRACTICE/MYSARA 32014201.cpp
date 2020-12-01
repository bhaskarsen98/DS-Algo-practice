#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long i64;
#define MOD 1000000007
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        i64 v[n];
        bool b[n][30]={0},np=0;
        for(int i=0;i<n;i++)cin>>v[i];
        for(int i=0;i<n;i++){
            i64 s=v[i];
            int pos=29;
            while(s){
                if(s&1){
                    b[i][pos]=1;
                }
                s/=2;
                pos-=1;
            }
        }
        for(int j=0;j<30&&!np;j++){
            bool setbit=0;
            for(int i=0;i<n&&!np;i++){
                if(b[i][j]==1)setbit=1;
                if(setbit!=b[i][j]){
                    np=1;
                    //cerr<<i<<" "<<j<<"\n";
                }
            }
        }
        if(np){
            cout<<0<<"\n";
            continue;
        }
        int ans=0,perm=1;
        for(int i=0;i<n-1;i++)
            for(int j=0;j<30;j++)
                b[i][j]?ans+=1:ans+=0;
        while(ans--){
            perm*=2;
            perm%=MOD;
        }
        cout <<perm << "\n";
        
    }
}