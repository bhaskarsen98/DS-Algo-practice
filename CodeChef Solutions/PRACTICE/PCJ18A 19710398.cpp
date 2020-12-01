#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--){
	int n;
	int min,food=0;
	cin>>n>>min;
	for(int i=0;i<n;i++){
		int arr;
		cin>>arr;
		if(arr>=min){
			food=1;
		}
	}
	if(food==1)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
return 0;
} 
