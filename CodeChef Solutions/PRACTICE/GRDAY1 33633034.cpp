#include<bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef vector<int> vi;
typedef vector<i64> vl;
typedef pair<int,int>pii;
#define all(A) (A).begin(),(A).end()
#define pb push_back
#define MOD 1000000007
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    fastio();
    clock_t beg=clock();
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        char s,l,ct;

        cin>>s>>l;
        // cerr<<s<<ct<<l<<"\n";
        // scanf("%c %c",&s,&l);
        if(s=='L'){
            if(x&1){
                cout<<x<<" "<<l<<"\n";
            }
            else{
                cout<<x<<" ";
                l=='H'?cout<<"E\n":cout<<"H\n";
            }
        }
        if(s=='R'){
            x=n-x+1;
            if(x&1){
                cout<<x<<" "<<l<<"\n";
            }
            else{
                cout<<x<<" ";
                l=='H'?cout<<"E\n":cout<<"H\n";
            }
        }
    }
    clock_t end=clock(); 
    fprintf(stderr, "\n%lf sec\n", (double)(end-beg)/(CLOCKS_PER_SEC));
    return 0;
}


  