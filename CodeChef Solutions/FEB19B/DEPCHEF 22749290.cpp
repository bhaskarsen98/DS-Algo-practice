#include<bits/stdc++.h>
using namespace std;
typedef pair <int,int> pp;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,fl=0;
        cin>>n;
        vector<int> a(n),p(n);
        vector<pp> d(n);
        for(int i=0;i<n;i++)    cin>>a[i];
        for(int i=0;i<n;i++){    cin>>d[i].first;d[i].second=i;}
        p[0]=a[1]+a[n-1];p[n-1]=a[0]+a[n-2];
        sort(d.begin(),d.end());
        for(int i=1;i<n-1;i++){
            p[i]=a[i-1]+a[i+1];
        }
        for(int i=n-1;i>=0;i--){
            //cout<<d[i].first<<" "<<p[d[i].second]<<" "<<d[i].first-p[d[i].second]<<"   ";
            if(d[i].first-p[d[i].second]>0){
                cout<<d[i].first<<"\n";
                fl=1;
                break;
            }
        }
        if(fl==0){  cout<<-1<<"\n";continue;}
    }
    return 0;
}