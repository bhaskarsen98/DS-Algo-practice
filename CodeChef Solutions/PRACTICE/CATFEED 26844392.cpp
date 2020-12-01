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
    clock_t beg=clock();
    //fastio();
    int t;
	cin>>t;
	while(t--){
		
		int ct,n,m,fl=0;
		cin>>n>>m;
		int arr[n]={0};
		for(int i=0;i<m;i++){
		    cin>>ct;
		    arr[ct-1]+=1;
		    if((i+1)%n==0){
		        //sort(arr,arr+n);
		        for(int j=0;j<n;j++){if(arr[j]!=1)fl=1;}
		        if(m<n)fl=1;
		        else memset(arr,0,sizeof(arr));
		    }
		}
		
		if(fl)cout<<"NO\n";
		else cout<<"YES\n";
	}
    
    
    
    
    clock_t end=clock(); 
    fprintf(stderr, "%lf sec\n", (double)(end-beg)/(CLOCKS_PER_SEC));
    return 0;
}