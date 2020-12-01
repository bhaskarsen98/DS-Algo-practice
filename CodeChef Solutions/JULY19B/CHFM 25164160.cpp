/*
    author : @bhaskar
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int,int>pii;
#define pb push_back
#define MOD 1000000007
#define debug puts("Q");
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        double n,i=0;
        cin>>n;
        unsigned long long s=0;
        vector<pair<long long,int>> a(n);
        for(int i=0;i<n;i++){cin>>a[i].first;a[i].second=i+1;s+=a[i].first;}
        double av=s/n;
        sort(a.begin(),a.end());
        for(i=0;i<n;i++)
            if(double((s-a[i].first)/(n-1))==av){cout<<a[i].second<<"\n";break;}
        if(i==n)cout<<"Impossible\n";
    }
    return 0;
}
