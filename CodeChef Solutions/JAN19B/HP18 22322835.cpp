#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,bob=0,alice=0,a,b;
        cin>>n>>a>>b;
        long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%a==0) bob+=1;
            else if(arr[i]%b==0)    alice+=1;
        }
        //cout<<bob<<" "<<alice;
        if(bob-alice<1) cout<<"ALICE\n";
        else    cout<<"BOB\n";
    }
    return 0;
}