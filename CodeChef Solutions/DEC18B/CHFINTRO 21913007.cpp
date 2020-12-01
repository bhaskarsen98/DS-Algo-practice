#include <iostream>
using namespace std;

int main() {
	int n,r;
	cin>>n>>r;
	while(n--){
	    int R;
	    cin>>R;
	    if(R>=r)
	        cout<<"Good boi\n";
	    else
	        cout<<"Bad boi\n";
	}
	return 0;
}
