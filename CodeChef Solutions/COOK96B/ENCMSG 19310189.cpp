#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        char str[n];
        cin>>str;
        int a=strlen(str);
        for(int j=0;j<a;j++){
            if(j%2==0&&str[j+1]!='\0'){
                char c;
                c=str[j+1];
                str[j+1]=str[j];
                str[j]=c;
            }
            str[j]=219-str[j];
        }
        cout << str << endl;

    }

    return 0;
}

