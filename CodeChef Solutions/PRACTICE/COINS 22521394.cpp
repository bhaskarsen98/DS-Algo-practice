#include<bits/stdc++.h>
using namespace std;
#define hell 10000000
#define ll long long int
ll ct[10000000]={0};
ll conv(ll n){
    if (n<=3)
        return n;
    if(n<hell)
        if (ct[n]!=0)    return ct[n];
        else    return ct[n]=max(n,conv(n/2)+conv(n/3)+conv(n/4));
    else
        return max(n,conv(n/2)+conv(n/3)+conv(n/4));
}
int main(){
    ll n;
    while(cin>>n)
    cout<<conv(n)<<"\n";
    return 0;
}