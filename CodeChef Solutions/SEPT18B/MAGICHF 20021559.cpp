#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n,x,s;
        cin>>n>>x>>s;
        int swap[s][2];
        //cout<<x<<endl<<endl;
        for(int i=0;i<s;i++){
            cin>>swap[i][0]>>swap[i][1];
            if(swap[i][0]==x)
                x=swap[i][1];
            else if(swap[i][1]==x)
                x=swap[i][0];
            //cout<<x<<endl;
        }
        cout<<x<<endl;
    }
    
    return 0;
}