#include<bits/stdc++.h>
#include<boost/math/common_factor.hpp>
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
using namespace std;
long gcdarray(vector<long> arr, int n) 
{ 
    long GCD = arr[0]; 
    for (int i=1;i<n;i++) 
        GCD=boost::math::gcd(GCD,arr[i]);
    return GCD; 
}
int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        long n;
        long long gcd=1;
        cin>>n;
        set<long>s;
        for(long i=0;i<n;i++){long r;cin>>r;s.insert(r);}
        if(n>=2&&s.size()==1){cout<<*s.begin()*2<<"\n";continue;}
        vector<long> arr(s.begin(),s.end());
        sort(arr.begin(),arr.end(),greater<int>());
        for(int i=0;i<3&&i<arr.size();i++){
            vector<long> ct;
            ct=arr;
            ct.erase(ct.begin()+i);
            long b=arr[i];
            long c=gcdarray(ct,ct.size());
            long long tmp=c+b;
            if(gcd<tmp)gcd=tmp;
        }
        cout<<gcd<<"\n";
    }
    return 0;
}