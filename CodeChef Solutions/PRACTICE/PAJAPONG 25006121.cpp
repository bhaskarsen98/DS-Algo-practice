//ping
#include<bits/stdc++.h>
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long x,y,k;
        cin>>x>>y>>k;
        if(((x+y)/k+1)%2!=0)cout<<"Chef\n";
        else cout<<"Paja\n";
    }
    return 0;
}
