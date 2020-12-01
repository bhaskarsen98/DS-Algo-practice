#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c,k;
        cin>>r>>c>>k;
        r-=1;c-=1;
        int l=max(c-k,0);
        int rt=min(c+k,7);
        int u=max(r-k,0);
        int d=min(r+k,7);
        cout<<(rt-l+1)*(d-u+1)<<"\n";
    }
    return 0;
}