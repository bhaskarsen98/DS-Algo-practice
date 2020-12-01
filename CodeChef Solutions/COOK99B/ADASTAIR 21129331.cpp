#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int ex=0,foo=0;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int tc=0;
        while(arr[0]-tc>k){
                tc+=k;
                ex++;
            }
        int i=0;
        for(i=0;i<n-1;i++){
            while(arr[i+1]-arr[i]>k){
                arr[i]+=k;
                ex++;
            }
        }
        cout<<ex<<"\n";
    }
    return 0;
}