 #include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long i64;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxc=0,arr[n],f=-1,l=-1; 
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxc=max(maxc,arr[i]);
        }
        for(int i=0;i<n;i++)
            if(arr[i]==maxc)
                f==-1?f=i:l=i;
        if(f>=l)l=f;
        if(l-f>n/2){
            cout<<0<<"\n";
            continue;
        }
        else{
            cout<<(f-n/2)+(n-l)<<"\n";
        }

    }
}