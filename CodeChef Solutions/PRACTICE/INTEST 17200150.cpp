#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

long int n,k,to=0,eta;
scanf("%lu %lu",&n,&k);
for(int i=0;i<n;i++){
	scanf("%lu\n",&eta);
	if(eta%k==0)
		to++;
}

cout<<to;
return 0;
}

