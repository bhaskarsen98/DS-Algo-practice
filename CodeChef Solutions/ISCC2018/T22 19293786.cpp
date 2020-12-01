#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        sort(arr,arr+n);
        if(arr[0]==1){
            for(int j=1;j<n;j++){
                int a=arr[j];
                if(a==2||a== 3||a== 5||a== 7||a== 11||a== 13||a== 17||a== 19||a== 23||a== 29||a== 31||a== 37||a== 41||a== 43||a== 47||a== 53||a== 59||a== 61||a== 67||a== 71||a== 73||a== 79||a== 83||a== 89||a== 97)
                {cout<<a<<endl;
                break;}
            }
        }
        else
            cout<<-1<<endl;

    }
    return 0;
}
 