#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long  n,b;
        cin>>n>>b;
        long max=0;
        long w,h,p;
        for(long i=0;i<n;i++){
            cin>>w>>h>>p;
            if(p<=b&&max<w*h){
                max=w*h;
            }
        }
        //sort(arr.begin(),arr.end());
        if(max>0)cout<<max<<"\n";
        else    cout<<"no tablet\n";
    }
    return 0;
}