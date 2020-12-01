#include<bits/stdc++.h>

using namespace std;

int main() {

 	int t;

 	cin>>t;
 	int ans[t];
 	for(int i=0;i<t;i++){

 		long int a,b,n;
 		scanf("%ld %ld %ld",&a,&b,&n);
 		if(n%2==0){
            if(abs(a)>abs(b))ans[i]=1;
            if(abs(a)<abs(b))ans[i]=2;
            if(abs(a)==abs(b))ans[i]=0;
 		}
 		else {
            if(a>b)ans[i]=1;
            if(a<b)ans[i]=2;
            if(a==b)ans[i]=0;
 		}

 	}
 	for(int i=0;i<t;i++){

        cout<<ans[i];
        if(i<t-1)
        cout<<endl;

 	}

 	return 0;
 }
