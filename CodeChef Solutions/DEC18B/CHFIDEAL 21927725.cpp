#include<iostream>
using namespace std;

int main() {
	int ct=6,x,y;
	x=rand()%3+1;
	cout<<x<<"\n";
	cout.flush();
	ct-=x;
	cin>>y;
	ct-=y;
	cout<<ct<<"\n";
	//cout.flush();
	//ct=6;
	return 0;
}
