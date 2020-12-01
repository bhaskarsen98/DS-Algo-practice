    #include <bits/stdc++.h>
     
    using namespace std;
    int main(){
      int t;
      cin>>t;
      for(int i=0;i<t;i++){
          int c1=0,c2=0;
          string a1,a2;
          cin>>a1>>a2;
          string bob="bob";
          for(int j=0;j<3;j++){
              if((a1[j]=='o'&&a2[j]=='b')||(a1[j]=='b'&&a2[j]=='o'))
                  c1+=1;
              else{
                  for(int k=0;k<3;k++){
                      if(a1[j]==bob[k]){
                          bob[k]='-';
                          break;
                      }
                      if(a2[j]==bob[k]){
                          bob[k]='-';
                          break;
                      }
                  }
              }
          }
          for(int j=0;j<3;j++){
              if(bob[j]=='-')
                  c2+=1;
          }
          if(3-c2==c1)cout<<"yes"<<endl;
          else cout<<"no"<<endl;
      }
      return 0;
    }