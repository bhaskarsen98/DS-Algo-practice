#include<bits/stdc++.h>
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
using namespace std;
unsigned long long SOD(unsigned long long ans){
    unsigned long long sum=0;
    while(ans>0){
        sum+=ans;
        ans/=10;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long long n;
        cin>>n;
        unsigned long long ans=n*10;
        unsigned long long parity=SOD(ans);
        for(int i=0;i<=9;i++){
            if((parity+i)==0){cout<<ans+i<<"\n";break;}
        }
    }
    return 0;
}
