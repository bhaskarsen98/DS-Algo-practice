#include<bits/stdc++.h>
#include<boost/math/common_factor.hpp>.
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b,k,l,ma=1,mb=1,ml=1;
        cin>>n>>a>>b>>k;
        if(a==1||b==1){
            if(a==1)mb=0;
            if(b==1)ma==0;
            if(a==1&&b==1){cout<<"Lose\n";continue;}
        }
        l=boost::math::lcm(a,b);
        ml=(n-(n%l))/l;
        if(ma>0){    ma=(n-(n%a))/a;ma-=ml;}
        if(mb>0){    mb=(n-(n%b))/b;mb-=ml;}
        if((ma+mb)>=k)cout<<"Win\n";
        else    cout<<"Lose\n";
    }
    return 0;
}