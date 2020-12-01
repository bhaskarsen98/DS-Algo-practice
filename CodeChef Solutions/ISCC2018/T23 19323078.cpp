#include <bits/stdc++.h>

using namespace std;
int gcd(int a,int b)
{
    if (a==0)
        return b;
    return gcd(b%a,a);
}
int GCD(int arr[], int n)
{
    int res=arr[0];
    for (int i=1;i<n;i++)
        res=gcd(arr[i],res);

    return res;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,flag=0;
        cin>>n;
        int arr[n],rec[100001]={0};
        for(int j=0;j<n;j++){
            cin>>arr[j];
            rec[arr[j]]++;}
        
        int p=GCD(arr,n);
            if(rec[p]==0||p==1){
                //cout<<"YES"<<endl;
                for(int j=0;j<n;j++)
                {
                    if(rec[arr[j]]>1){
                        flag+=1;
                        
                    }
                }
                if(flag<n){
                    cout<<"YES"<<endl;
                    continue;
                }
                else cout<<"NO";
                
            }
            else
                cout<<"NO"<<endl;
        
        
        
        
        
    }
    return 0;
}