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
#define debug puts("dafuq");
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        i64 n;
        string k;
        i64 k_;
        cin>>n>>k;
        k_=k[0]-'0';
        for(int i=1;i<k.length();i++){
            k_=k_*10+k[i]-'0';
            k_%=MOD;
        }
        if(k_==n)   cout<<0<<"\n";
        else if(k_<n){
            if(k_<n/2)cout<<2*k_<<"\n";
            else if(k_>(n/2))cout<<2*(n-k_)<<"\n";
            else    cout<<2*(n/2)-1<<"\n"; 
        }
        else if(k_>n){
            if((k_%n)<(n/2)) cout<<2*(k_%n)<<"\n";
            else if(k_%n>n/2)   cout<<2*(n-(k_%n))<<"\n";
            else    cout<<2*n/2-1<<"\n";
        }
    }
    return 0;
}
