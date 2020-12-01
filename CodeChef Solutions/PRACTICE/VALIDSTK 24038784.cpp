#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=0,ct=0,sum=0,fl=0;
        cin>>n;
        while(n--){
            cin>>ct;
            ct==1?sum+=1:sum-=1;
            if(sum<0&&!fl)   fl=1;
        }
        fl==1?cout<<"Invalid\n":cout<<"Valid\n";
        
    }
    return 0;
}