#include<bits/stdc++.h>
#include <boost/range/algorithm/count.hpp>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        //cout<<"hi";
        set<char> si;
        si.insert(s.begin(),s.end());
        vector<long> fq(26,0);
        long ct=0;
        for(auto i=si.begin();i!=si.end();i++){
            char c=*i;
            fq[ct]=boost::count(s, c);
            ct+=1;
        }
        sort(fq.begin(),fq.end(),greater<int>());
        /*for(int i=0;i<26;i++){
            cout<<fq[i]<<" ";
        }*/
        long ct2; 
        int cnt;
        vector<long> ansmin;
        for(int i=1;i<=26;i++){
            //cout<<i<<" ";
            //cout<<s.length()<<" ";
            ct=0;
            if((s.length()%(i))==0){
                ct=0;
                cnt=s.length()/(i);
                //cout<<cnt<<" ";
                for(int j=0;j<i;j++){
                    //cout<<j<<" ";
                    if(fq[j]<cnt){
                        ct2=abs(cnt-fq[j]);
                        ct+=ct2;
                    }
                    else    ct=ct;
                }
             ansmin.push_back(ct);   
            }
        }
        sort(ansmin.begin(),ansmin.end());
        cout<<ansmin[0]<<"\n";
    }
    return 0;
}