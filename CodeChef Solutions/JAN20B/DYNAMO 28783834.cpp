/*
    author:@bhaskar_8998
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<i64,i64> pll;
typedef map<i64,i64> ml;
#define pb push_back
#define MOD 1000000007
#define debug puts("Q");
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
 
int main() 
{ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    fastio();
    i64 t;
    cin>>t;
    while(t--){
        i64 N=0,S,A=0,B=0,C=0,D=0,E=0,res=0;

        cin>>N>>A;
        i64 tn=1;
        while(N--){
            tn*=10;
        }
        S=A+2*tn;        

        cout<<S<<"\n";
        cout.flush();

        cin>>B;
        C=tn-B;

        cout<<C<<"\n";
        cout.flush();

        cin>>D;
        E=tn-D;

        cout<<E<<"\n";
        cout.flush();

        cin>>res;

        if(res==-1) break;


    }


    return 0;
} 

