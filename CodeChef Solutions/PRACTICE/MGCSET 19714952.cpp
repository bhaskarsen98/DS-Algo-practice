#include<bits/stdc++.h>

using namespace std;
int power(int x, unsigned int y, int p)
{
    int res = 1;      
 
    x = x % p;  
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
 
        y = y>>1; 
        x = (x*x) % p;  
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,count=0;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%m==0){
                count++;
            }
        }
        int s=power(2,count,10000000007)-1;
        cout<<s<<endl;
        
    }
    return 0;
}