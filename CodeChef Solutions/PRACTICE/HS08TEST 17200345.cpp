#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

float bal;
int w;
scanf("%d %f\n",&w,&bal);
if(w%5==0&&bal-w-0.50>=0){
    bal=bal-w-0.50;
    printf("%.2f",bal);
}
else
    printf("%.2f",bal);
return 0;
}
