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
        int x=0,y=0;
        bool v=1,h=1;
        for(int i=0;i<n;i++){            
            char c;
            cin>>c;
            if(c=='L'&& h){
                x-=1;
                v=1;
                h=0;
            }
            else if(c=='R'&& h){
                x+=1;
                v=1;
                h=0;
            }
            else if(c=='D'&& v){
                y-=1;
                h=1;
                v=0;
            }
            else if(c=='U'&& v){
                y+=1;
                h=1;
                v=0;
            }
        }
        cout<<x<<" "<<y<<"\n";

    }
}