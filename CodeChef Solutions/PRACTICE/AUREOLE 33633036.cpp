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
        string s;
        cin>>s;
        char c=s[0];
        int r=1;
        int ch=0,nu=0;
        for(int i=1;i<s.length();i++){
            if(s[i]==c)
                r+=1;
            else{
                ch+=1;
                if(r>1)
                    nu+=1;
                r=1;
                c=s[i];
            }
            // cerr<<r<<" "; 
        }
        ch+=1;
        if(r>1)
            nu+=1;
        // cerr<<ch<<" "<<nu<<"\n";
        cout<<long(8*s.length())-long(32*nu+ch*8)<<"\n";

    }
    clock_t end=clock(); 
    fprintf(stderr, "\n%lf sec\n", (double)(end-beg)/(CLOCKS_PER_SEC));
    return 0;
}


  