//sil
#include<bits/stdc++.h>
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long arr[n],brr[n];
        long ea=0,oa=0,ob=0,eb=0;
        for(long i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)ea+=1;
            else oa+=1;
        }
        for(long i=0;i<n;i++){
            cin>>brr[i];
            if(brr[i]%2==0)eb+=1;
            else ob+=1;
        }
        long e=min(ea,eb);
        long e_=e,e__=e;
        long o=min(oa,ob);
        long o_=o,o__=o;
        long ans=0;
        sort(arr,arr+n);
        sort(brr,brr+n);
        for(int i=n-1;o>0||e>0;i--){
            if(arr[i]%2==0&&e>0){
                e-=1;
                ans+=arr[i];
                arr[i]=0;
            }
            else if(arr[i]%2!=0&&o>0){
                o-=1;
                ans+=arr[i];
                arr[i]=0;
            }
        }
        for(int i=n-1;o_>0||e_>0;i--){
            if(brr[i]%2==0&&e_>0){
                e_-=1;
                ans+=brr[i];
                brr[i]=0;
            }
            else if(brr[i]%2!=0&&o_>0){
                o_-=1;
                ans+=brr[i];
                brr[i]=0;
            }
        }
        ans/=2;
        sort(arr,arr+n);
        sort(brr,brr+n);
        long ans_=0;
        //or(int i=n-1;i>=0;i--)cout<<arr[i]<<" "<<brr[i]<<"\n"
        for(long i=n-1;arr[i]>0;i--){
            //cout<<arr[i]<<" "<<brr[i]<<" "<<((arr[i]+brr[i])/2)<<"\n";
            ans_+=((arr[i]+brr[i])/2);
        }
        //cout<<ans<<" "<<ans_<<" ";
        cout<<ans+ans_<<"\n";
    }
    return 0;
}
