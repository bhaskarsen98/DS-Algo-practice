#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        string s;
        char c;
        cin>>n>>s>>c;
        long cnt=(n*(n+1))/2,cnt2=0;
        //cout<<"cnt="<<cnt<<"\n";
        for(long i=0;i<n;i++){
            if(s[i]==c){
                //cout<<(cnt2*(cnt2+1))/2<<" ";
                cnt-=(cnt2*(cnt2+1))/2;
                cnt2=0;
            }
            else cnt2+=1;
            if(i==n-1){
                cnt-=(cnt2*(cnt2+1))/2;
            }
        }
        //cout<<"\n";
        cout<<cnt<<"\n";
    }
    return 0;
}