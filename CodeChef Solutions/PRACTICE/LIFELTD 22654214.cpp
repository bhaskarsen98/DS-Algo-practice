#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    
    while(n--){
        char logo[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>logo[i][j];
            }
        }
        int ct=0;
        for(int i=1;i<3;i++){
            for(int j=0;j<2;j++){
                
                if(logo[i][j]=='l'&&logo[i-1][j]=='l'&&logo[i][j+1]=='l')
                    {
                        //cout<<n<<" :"<<i<<" "<<j;
                        ct=1;
                        break;
                    }
                
            }
        }
        if(ct==1)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}