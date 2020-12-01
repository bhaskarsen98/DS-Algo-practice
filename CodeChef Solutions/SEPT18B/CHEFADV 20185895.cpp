#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int p=0,k=0,n,m,x,y;
        cin>>n>>m>>x>>y;
        n-=1;m-=1;
        p=n-n%x;
        k=m-m%y;
        if(p==n&&k==m)
            cout<<"Chefirnemo\n";
        else if(p==n&&k!=m){
            p=abs(p-x);
            p+=1;k+=1;
            if(p==n&&k==m)
                cout<<"Chefirnemo\n";
            else
                cout<<"Pofik\n";
        }
        else if(p!=n&&k==m){
            k=abs(k-y);
            k+=1;p+=1;
            if(p==n&&k==m)
                cout<<"Chefirnemo\n";
            else
                cout<<"Pofik\n";
        }
        else if(p!=n&&k!=m){
            k+=1;p+=1;
            if(p==n&&k==m)
                cout<<"Chefirnemo\n";
            else
                cout<<"Pofik\n";
        }
    }
    return 0;
}