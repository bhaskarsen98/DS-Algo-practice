#include<bits/stdc++.h>
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int mk[n]={0},c[n]={0};
        for(int i=0;i<n;i++)cin>>mk[i];
        for(int i=0;i<n;i++)cin>>c[i];
        sort(mk,mk+n);
        sort(c,c+n);
        //cout<<c[n-1]<<" "<<mk[k-1]<<"\n"<<c[n-k]<<" "<<mk[0]<<"\n";
        //for(int i=0;i<k;i++)cout<<c[n-1-i]<<" "<<mk[k-1-i]<<"\n";
        if(c[n-1]>mk[k-1]&&c[n-k]>mk[0]){
            for(int i=0;i<k;i++)
                if(c[n-1-i]<=mk[k-1-i]){
                    cout<<"NO\n";
                    break;
                }
            cout<<"YES\n";
        }
        else    cout<<"NO\n";
    }
    return 0;
}
