#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i;
    cin>>n>>k;
    vector<int> arr(n+1);
    while(k--){
         string s,t="CLOSEALL";
        cin>>s;
        if(s==t){
            fill(arr.begin(),arr.end(),0);
            cout<<0<<"\n";
            continue;
        }
        cin>>i;
        {
            if(arr[i]==0)arr[i]=1;
            else    arr[i]=0;
            cout<<accumulate(arr.begin(),arr.end(),0)<<"\n";
        }
         
    }
    
    return 0;
}