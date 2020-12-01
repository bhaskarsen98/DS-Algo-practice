#include<bits/stdc++.h>
using namespace std;
void rem(int a[],int n) 
{   
    int id = -1;
    for (int i=0;i<n;i++){ 
        if (a[i]!=0){ 
            id=i; 
            break; 
        }
    }
    if (id==-1)   return;
    int b[n-id]; 
    for (int i=0;i<n-id;i++) 
        b[i]=a[id+i];
    for (int i=0;i<n-id;i++) 
        cout<<b[i]; 
} 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int d;
        cin>>d;
        string s=to_string(n);
        int dg=s.length();
        int arr[dg]={0};
        for(int i=dg-1;n>0;i--){
            arr[i]=n;
            n/=10;
        }
        int ct=0;
        int x  = dg;
        while(x--){
            for(int i=0;i<dg;i++){
            if(arr[dg-1]>=d)arr[dg-1]=d;
            for(int j=i+1;j<dg;j++){
                if(arr[i]>arr[j]){
                    for(int k=i;k<dg-1;k++){
                        arr[k]=arr[k+1];
                    }
                    arr[dg-1]=d;
                }
            }
            
        }
        }
        rem(arr,dg); 
        cout<<"\n";
    }
    
    return 0;
}