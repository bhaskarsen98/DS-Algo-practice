#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int p,n,max,ct=0,ct2=0,ci=0,cj=0,ck=0;
    cin>>n>>p;
    if(n==0||n%2==0) max=((n)/2-1);
    else    max=(floor((n)/2));
    for(int i=1;i<=p;i++){
        for(int j=1;j<=p;j++){
            for(int k=1;k<=p;k++){
                    if((((n%i)%j)%k)%n==max){    ct++;}

            }
        }
    }
    cout<<ct<<"\n";
    }
    return 0;
}