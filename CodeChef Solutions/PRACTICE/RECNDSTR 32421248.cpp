#include<bits/stdc++.h>
using namespace  std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif        
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()<3){
            cout<<"YES\n";
            continue;
        }
        else{
            string ss(s.begin()+2,s.end());
            string sv(s.begin(),s.begin()+s.length()-2);
            // cerr<<ss<<" "<<sv;
            ss+=s[0];ss+=s[1];
            string svv="";
            svv+=s[s.length()-2];svv+=s[s.length()-1];
            svv+=sv;
            if(ss==s||svv==s)
                cout<<"YES\n";
            else
                cout<<"NO\n";            
        }
    }
}
