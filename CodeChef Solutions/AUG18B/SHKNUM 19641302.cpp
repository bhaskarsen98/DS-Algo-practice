#include<bits/stdc++.h>


using namespace std;
string toBin(int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long int n;
        cin>>n;
        string bin=toBin(n);
        int x=bin.length()-1;
        string s=bin.substr(bin.length()-x);
        int y=0;
        if(s.find_first_of('1')!=-1)
            y=s.length()-s.find_first_of('1')-1;
        if(x == -1)
            x = 1;
        if(y == -1)
            y = 0;
        if(x == y)
            x++;
        int sum1 =pow(2,x)+pow(2,y);
            int sum2=INT_MAX,sum3=INT_MAX;
            if(x == y+1) {
                sum2 =pow(2,x+1) + pow(2,0);
            }
            else
                sum2 =pow(2,x)+pow(2,y+1);
        cout<<min(abs(n-sum1),abs(n-sum2))<<endl;
    }
    return 0;
}