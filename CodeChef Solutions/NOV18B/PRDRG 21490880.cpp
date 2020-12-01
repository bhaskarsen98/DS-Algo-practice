#include <bits/stdc++.h>
using namespace std;
long int oddgen(long int n){
    long int i=1,odd=1;
    for(i=3;i<=n;i++){
        odd=odd*2;
        if(i%2==0)
            odd-=1;
        else
            odd+=1;
    }
    return odd;
}
long int powr(long int s){
    long int r=1;
    for(int i=1;i<=s;i++){
        r*=2;
    }
    return r;
}
int main() {
	long int t;
	cin>>t;
	//t=26;
	while(t--){
	    long int n;
	    cin>>n;
	    //n=t;cout<<t<<"  ";
	    if(n==1)
	        cout<<"1 2 ";
	    else if(n==2)
	        cout<<"1 4 ";
	    else{
	        cout<<oddgen(n)<<" "<<powr(n)<<" "; 
	        
	    }
	    //cout<<"\n";
	}
	return 0;
}
