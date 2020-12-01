#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,m;
    cin>>n>>m;
    vector <pair<long,long>> arr(m),brr(n);
    for(long i=0;i<n;i++){
        cin>>brr[i].first;brr[i].second=i;
    }
    for(long i=0;i<m;i++){
        cin>>arr[i].first;arr[i].second=i;
        //cout<<n-1<<" "<<i<<"\n";
    }
    sort(brr.begin(),brr.end());
    sort(arr.begin(),arr.end());
    for(long i=0;i<n;i++){
        cout<<i<<" "<<arr[m-1].second<<"\n";
    }
    for(long i=0;i<m;i++){
        if(i==arr[m-1].second)  continue;
        cout<<brr[0].second<<" "<<i<<"\n";
    }
    return 0;
}