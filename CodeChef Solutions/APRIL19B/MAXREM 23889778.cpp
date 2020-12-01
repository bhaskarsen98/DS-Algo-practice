#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    if(arr[0]==arr[n-1]){
        cout<<0;return 0;
    }
    else{
        for(long i=n-1;;i--){
            if(arr[i]!=arr[n-1]){
                cout<<arr[i];
                return 0;
            }
        }
    }
    return 0;
}