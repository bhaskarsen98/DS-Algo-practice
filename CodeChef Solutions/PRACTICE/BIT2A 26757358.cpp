/*
    author:@bhaskar_8998
*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional>
using namespace __gnu_pbds; 
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;  
typedef long long i64;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<int,int>pii;
#define pb push_back
#define MOD 1000000007
#define debug puts("Q");
#define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
int main(){
    //fastio();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        i64 arr[n]={0};
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;i++){
            int ct=0;
            for(int j=i+1;j<n;j++)
                if(arr[i]!=arr[j])ct+=1;
            cout<<ct<<" ";    
        }
        cout<<"\n";
    }
    return 0;
}