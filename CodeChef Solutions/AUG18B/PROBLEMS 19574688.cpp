#include<bits/stdc++.h>

using namespace std;

int main(){
    int p,s;
    cin>>p>>s;
    //vector <pair <int,int>>arr(p,s);
    vector<vector<pair<int,int>>> arr( p, vector<pair<int,int>>(s) );
    //cout<<"hi1";

	
    for(int i=0;i<p;i++){
        for(int j=0;j<s;j++){
            int a;
            cin>>a;
            arr[i][j].first=a;
        }
        for(int j=0;j<s;j++){
            int b;
            cin>>b;
            arr[i][j].second=b;
        }
    }
    for(int i=0;i<p;i++){
        sort(arr[i].begin(),arr[i].end());
    }
    vector <pair<int,int>> res(p);
    for(int i=0;i<p;i++ ){
        int l=0;
        for(int j=0;j<s-1;j++){
            if(arr[i][j].second>arr[i][j+1].second){
                l+=1;
            }
            res[i].first=l;
            res[i].second=i+1;
        }
    }
    sort(res.begin(),res.end());
    
    for(int i=0;i<p;i++)
        cout<<res[i].second<<endl;
    return 0;
}