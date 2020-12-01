#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long temp,ps=0,ng=0;
        while(n--){
            cin>>temp;
            temp>0?ps+=1:ng+=1;
        }
        //cout<<ps<<" "<<ng<<"\n";
        if(ps>0&&ng>0)  ps>ng?cout<<ps<<" "<<ng:cout<<ng<<" "<<ps;
        else    ps>0?cout<<ps<<" "<<ps:cout<<ng<<" "<<ng;
        cout<<"\n";
    }
    return 0;
}