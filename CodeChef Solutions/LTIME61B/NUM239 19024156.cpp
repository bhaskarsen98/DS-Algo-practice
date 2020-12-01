#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    long int ans[t]={0};
    for(int i=0;i<t;i++){
        long int l,r;
        cin>>l>>r;
        for(long int j=l;j<=r;j++){
            if(j==2||j==3||j==9)
                ans[i]++;
        }
    }
    for(int i=0;i<t;i++)
        cout<<ans[i]<<endl;

	return 0;

}