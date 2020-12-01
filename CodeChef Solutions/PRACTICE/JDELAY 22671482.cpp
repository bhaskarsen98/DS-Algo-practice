#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n][2];
	    int c=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i][0]>>arr[i][1];
	        if(abs(arr[i][0]-arr[i][1])>5)
	            c+=1;
	    }
	    cout<<c<<endl;
	    
	}
	return 0;
}
