#include<iostream>
 
using namespace std;
void rem(int g){
	int s=0;
	if(g==0)
		cout<<0;
	else{
		while(g!=0)
		{
			g=g*2;
			s++;
		}
		cout<<s;
	}
}
 
int main(){
	int i,t;
	cin>>t;
	for(i=0;i<t;i++){
		int n;
		cin>>n;
		if(n%5==0||n==0)
			rem(n);
		else
			cout<<-1;
		cout<<endl;
	}
	return 0;
}  