#include<bits/stdc++.h>
#include<boost/math/common_factor.hpp>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,l=0;
        cin>>n;
        long long arr[n];
        for(long i=0;i<n;i++){cin>>arr[i];l+=(arr[i]-1);}
        cout<<l+1<<"\n";
    }
    return 0;
}