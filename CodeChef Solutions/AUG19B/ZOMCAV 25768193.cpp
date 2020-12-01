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

vector<i64> diffar(vector<i64>& v) 
{ 
	int n = v.size(); 
	vector<i64> d(n + 1); 
	d[0]=v[0];
	d[n]=0; 
	for(int i=1;i<n;i++) 
		d[i]=v[i]-v[i-1]; 
	return d; 
} 

void updater(vector<i64>& d,int l,int r) 
{ 
	d[l]+=1; 
	d[r+1]-=1; 
} 

void finarr(vector<i64>& v,vector<i64>& d) 
{ 
	for(int i=0;i<v.size();i++) { 
		if (i==0) 
			v[i]=d[i]; 
		else
			v[i]=d[i]+v[i-1]; 
	} 
} 
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
	    int n;
	    cin>>n;
	    vector<i64> z(n),v(n,0);
	    vector<pair<i64,i64>> c(n);
    	vector<i64> D=diffar(v); 
        for(int i=1;i<=n;i++){
            i64 ct;
            cin>>ct;
            c[i-1].first=i-ct-1;
            if(c[i-1].first<0)c[i-1].first=0;
            c[i-1].second=i+ct-1;
            if(c[i-1].second>=n)c[i-1].second=n-1;
        }
        for(int i=0;i<n;i++)cin>>z[i];
        for(int i=0;i<n;i++){
            i64 l=c[i].first,r=c[i].second;
            updater(D,l,r);
        }
    	finarr(v,D);
    	sort(v.begin(),v.end());
    	sort(z.begin(),z.end());
    	int ct=1;
    	for(int i=0;i<n;i++){
    	    if(v[i]!=z[i]){ct=0;break;}   
    	}
    	if(ct==0)cout<<"NO\n";
    	else cout<<"YES\n";
    }
	return 0; 
} 
