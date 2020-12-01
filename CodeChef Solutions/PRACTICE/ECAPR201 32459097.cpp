#include<bits/stdc++.h>
using namespace  std;
int main(){   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<*min_element(s.begin(),s.end())<<"\n";
    }    

}
