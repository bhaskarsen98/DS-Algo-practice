#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][n]={0};
        int i,j1,j2,ct=1;
        for(j1=0;j1<n;j1++){
            i=0;
            for(j2=j1;j2>=0;j2--){              //upper triangle
                arr[i][j2]=ct;
                ct+=1;
                i+=1;
            }
        }
        
        for(int j1=1;j1<n;j1++){
            i=n-1;
            for(j2=j1;j2<n;j2++){		//lower triangle
                arr[j2][i]=ct;
                ct+=1;
                i-=1;
            }
        }
        
        for(int l=0;l<n;l++){
            for(int m=0;m<n;m++)
                cout<<arr[l][m]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}