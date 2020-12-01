#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,count=0;
        cin>>n;
        long int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                long c=arr[j]^arr[k];
                if(c%2==0&&c>2)
                    count+=1;
                
            }
        }
        cout<<count<<endl;
    }
    return 0;
}