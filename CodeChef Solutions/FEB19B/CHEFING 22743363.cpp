#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sp=0;
        cin>>n;
        string c;
        vector <vector<int>> ct(n,vector<int>(26,0));
        for(int i=0;i<n;i++){
            cin>>c;
            //cout<<c<<"\n";
            for(int j=0;j<c.length();j++){
                ct[i][c[j]-97]=1;
            }    
            
        }
        for(int i=0;i<26;i++){
            int sm=0;
            for(int j=0;j<n;j++){
                sm+=ct[j][i];
            }
            if(sm==n)sp+=1;
        }
        cout<<sp<<"\n";
    }
    return 0;
}