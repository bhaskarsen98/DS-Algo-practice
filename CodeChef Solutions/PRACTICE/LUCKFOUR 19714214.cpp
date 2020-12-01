#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        while(n>0){
            int c=n;
            if(c==4)
                count+=1;
            n=n/10;
        }
        cout<<count<<endl;
    }
    return 0;
}