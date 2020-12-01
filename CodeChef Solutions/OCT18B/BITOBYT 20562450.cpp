#include <bits/stdc++.h>
using namespace std;
#define N 1000000007
  


int main() {
	unsigned long long int t;
	cin>>t;
	while(t--){
	    unsigned long long int n;
	    cin>>n;
	    unsigned long long int bit=1,nib=0,byt=0;
	    unsigned long long int s=n&;
	    unsigned long long int q=n/26;
	    if(s<=2)
	    {bit=pow(2,q);nib=0;byt=0;}
	    else if(s<=10)
	    {bit=0;nib=pow(2,q);byt=0;}
	    else if(s<26)
	    {bit=0;nib=0;byt=pow(2,q);}
	    
	    
	    if(s==0)
	    {bit=0;nib=0;byt=pow(2,q-1);}
	    cout<<bit<<" "<<nib<<" "<<byt<<endl;
	}
	return 0;
}