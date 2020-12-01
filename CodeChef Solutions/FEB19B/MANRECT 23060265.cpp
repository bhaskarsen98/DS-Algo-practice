#include<bits/stdc++.h>
using namespace std;
#define hell 101
int main(){
    int t;
    cin>>t;
    while(t--){
        long ct,o=0,infi=0,infif=0;
        cout.flush();
        cout<<"Q "<<0<<" "<<0<<"\n";
        cout.flush();
        cin>>ct;
        o=ct; 
        cout.flush();
        cout<<"Q "<<hell<<" "<<hell<<"\n";
        cout.flush();
        cin>>ct;
        infi=ct-hell;
        infif=hell-infi;
        //cout<<infi<<" "<<infif;
        long xl=-1,yl=-1,xu=-1,yu=-1,tyl=o,txl=0,tyu=infif,txu=0;
        while(txu<=infif&&tyu>=0){
            cout.flush();
            cout<<"Q "<<txu<<" "<<tyu<<"\n";
            cout.flush();
            cin>>ct;
            if(ct==0){
                xu=txu;yu=tyu;
                break;
            }
            tyu-=1;txu+=1;
            
        }
        while(txl<=o&&tyl>=0){
            cout.flush();
            cout<<"Q "<<txl<<" "<<tyl<<"\n";
            cout.flush();
            cin>>ct;
            if(ct==0){
                xl=txl;yl=tyl;
                break;
            }
            tyl-=1;txl+=1;
            
        }
        cout.flush();
        cout<<"A "<<xl<<" "<<yl<<" "<<xu<<" "<<yu<<"\n";
        cout.flush();
        cin>>ct;
        if(ct>0)continue;
        else break;
        
    }
    
    
    return 0;
}