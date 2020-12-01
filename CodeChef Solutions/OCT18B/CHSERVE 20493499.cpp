#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n,m,k;
	    cin>>n>>m>>k;
	    long long int p=n+m;
	    if(!(p%k==0))
	        p=((p+k-1)/k)*k-k;
	    if((p/k)%2==0)
	        cout<<"CHEF\n";
	    else
	        cout<<"COOK\n";
	}
	return 0;
}
