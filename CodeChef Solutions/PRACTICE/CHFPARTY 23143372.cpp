#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        std::vector<int> ct(n);
        int party=0;
        for(int i=0;i<n;i++){
            cin>>ct[i];
        }
        sort(ct.begin(),ct.end());
        for(int i=0;i<n;i++){
            if(ct[i]>party){}
            else party+=1;
        }
        cout<<party<<"\n";
    }
    
    return 0;
}