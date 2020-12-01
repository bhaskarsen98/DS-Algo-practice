#include<bits/stdc++.h>
using namespace std;

int main(){
    long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        long long arr[31]={0};
        for(long long i=0;i<n;i++){
            long long ct[5]={0};
            cin>>s;
            if (s.find('a') != std::string::npos)ct[0]=0;
            else ct[0]=1;
            if (s.find('e') != std::string::npos)ct[1]=0;
            else ct[1]=1;
            if (s.find('i') != std::string::npos)ct[2]=0;
            else ct[2]=1;
            if (s.find('o') != std::string::npos)ct[3]=0;
            else ct[3]=1;
            if (s.find('u') != std::string::npos)ct[4]=0;
            else ct[4]=1;
            
        /*0*/ if(ct[0]==0&&ct[1]==0&&ct[2]==0&&ct[3]==0&&ct[4]==0)  arr[0]+=1;
        
        /*1*/ if(ct[0]==1&&ct[1]==0&&ct[2]==0&&ct[3]==0&&ct[4]==0)  arr[1]+=1;
        
        /*2*/ if(ct[0]==0&&ct[1]==1&&ct[2]==0&&ct[3]==0&&ct[4]==0)  arr[2]+=1;
        
        /*3*/ if(ct[0]==0&&ct[1]==0&&ct[2]==1&&ct[3]==0&&ct[4]==0)  arr[3]+=1;
        
        /*4*/ if(ct[0]==0&&ct[1]==0&&ct[2]==0&&ct[3]==1&&ct[4]==0)  arr[4]+=1;
        
        /*5*/ if(ct[0]==0&&ct[1]==0&&ct[2]==0&&ct[3]==0&&ct[4]==1)  arr[5]+=1;
        
        /*6*/ if(ct[0]==1&&ct[1]==1&&ct[2]==0&&ct[3]==0&&ct[4]==0)  arr[6]+=1;
        
        /*7*/ if(ct[0]==1&&ct[1]==0&&ct[2]==1&&ct[3]==0&&ct[4]==0)  arr[7]+=1;
        
        /*8*/ if(ct[0]==1&&ct[1]==0&&ct[2]==0&&ct[3]==1&&ct[4]==0)  arr[8]+=1;
        
        /*9*/ if(ct[0]==1&&ct[1]==0&&ct[2]==0&&ct[3]==0&&ct[4]==1)  arr[9]+=1;
        
        /*10*/ if(ct[0]==0&&ct[1]==1&&ct[2]==1&&ct[3]==0&&ct[4]==0)  arr[10]+=1;
        
        /*11*/ if(ct[0]==0&&ct[1]==1&&ct[2]==0&&ct[3]==1&&ct[4]==0)  arr[11]+=1;
        
        /*12*/ if(ct[0]==0&&ct[1]==1&&ct[2]==0&&ct[3]==0&&ct[4]==1)  arr[12]+=1;
        
        /*13*/ if(ct[0]==0&&ct[1]==0&&ct[2]==1&&ct[3]==1&&ct[4]==0)  arr[13]+=1;
        
        /*14*/ if(ct[0]==0&&ct[1]==0&&ct[2]==1&&ct[3]==0&&ct[4]==1)  arr[14]+=1;
        
        /*15*/ if(ct[0]==0&&ct[1]==0&&ct[2]==0&&ct[3]==1&&ct[4]==1)  arr[15]+=1;
        
        /*16*/ if(ct[0]==1&&ct[1]==1&&ct[2]==1&&ct[3]==0&&ct[4]==0)  arr[16]+=1;
        
        /*17*/ if(ct[0]==1&&ct[1]==1&&ct[2]==0&&ct[3]==1&&ct[4]==0)  arr[17]+=1;
        
        /*18*/ if(ct[0]==1&&ct[1]==1&&ct[2]==0&&ct[3]==0&&ct[4]==1)  arr[18]+=1;
        
        /*19*/ if(ct[0]==1&&ct[1]==0&&ct[2]==1&&ct[3]==1&&ct[4]==0)  arr[19]+=1;
        
        /*20*/ if(ct[0]==1&&ct[1]==0&&ct[2]==1&&ct[3]==0&&ct[4]==1)  arr[20]+=1;
        
        /*21*/ if(ct[0]==1&&ct[1]==0&&ct[2]==0&&ct[3]==1&&ct[4]==1)  arr[21]+=1;
        
        /*22*/ if(ct[0]==0&&ct[1]==1&&ct[2]==1&&ct[3]==1&&ct[4]==0)  arr[22]+=1;
        
        /*23*/ if(ct[0]==0&&ct[1]==1&&ct[2]==1&&ct[3]==0&&ct[4]==1)  arr[23]+=1;
        
        /*24*/ if(ct[0]==0&&ct[1]==1&&ct[2]==0&&ct[3]==1&&ct[4]==1)  arr[24]+=1;
        
        /*25*/ if(ct[0]==0&&ct[1]==0&&ct[2]==1&&ct[3]==1&&ct[4]==1)  arr[25]+=1;
        
        /*26*/ if(ct[0]==1&&ct[1]==1&&ct[2]==1&&ct[3]==1&&ct[4]==0)  arr[26]+=1;
        
        /*27*/ if(ct[0]==1&&ct[1]==1&&ct[2]==1&&ct[3]==0&&ct[4]==1)  arr[27]+=1;
        
        /*28*/ if(ct[0]==0&&ct[1]==1&&ct[2]==1&&ct[3]==1&&ct[4]==1)  arr[28]+=1;
        
        /*29*/ if(ct[0]==1&&ct[1]==0&&ct[2]==1&&ct[3]==1&&ct[4]==1)  arr[29]+=1;
        
        /*30*/ if(ct[0]==1&&ct[1]==1&&ct[2]==0&&ct[3]==1&&ct[4]==1)  arr[30]+=1;
        
        }
        long long sum=0;
        sum+=arr[1]*(arr[2]+arr[3]+arr[4]+arr[5]+arr[10]+arr[11]+arr[12]+arr[13]+arr[14]+arr[15]+arr[22]+arr[23]+arr[24]+arr[25]+arr[28]);
        
        sum+=arr[2]*(arr[3]+arr[4]+arr[5]+arr[7]+arr[8]+arr[9]+arr[13]+arr[14]+arr[15]+arr[19]+arr[20]+arr[21]+arr[25]+arr[29]);
        
        sum+=arr[3]*(arr[4]+arr[5]+arr[6]+arr[8]+arr[9]+arr[11]+arr[12]+arr[15]+arr[17]+arr[18]+arr[21]+arr[24]+arr[30]);
        
        sum+=arr[4]*(arr[5]+arr[6]+arr[7]+arr[9]+arr[10]+arr[12]+arr[14]+arr[16]+arr[18]+arr[20]+arr[23]+arr[27]);
        
        sum+=arr[5]*(arr[6]+arr[7]+arr[8]+arr[10]+arr[11]+arr[13]+arr[16]+arr[17]+arr[19]+arr[22]+arr[26]);
        
        sum+=arr[6]*(arr[13]+arr[14]+arr[15]+arr[25]);
        
        sum+=arr[7]*(arr[11]+arr[12]+arr[15]+arr[24]);
        
        sum+=arr[8]*(arr[10]+arr[12]+arr[14]+arr[23]);
        
        sum+=arr[9]*(arr[10]+arr[11]+arr[13]+arr[22]);
        
        sum+=arr[10]*(arr[15]+arr[21]);
        
        sum+=arr[11]*(arr[14]+arr[20]);
        
        sum+=arr[12]*(arr[13]+arr[19]);
        
        sum+=arr[13]*(arr[18]);
        
        sum+=arr[14]*(arr[17]);
        
        sum+=arr[15]*(arr[16]);
        
        if(arr[0]>0){
            sum+=arr[0]*(n-arr[0])+(arr[0]*(arr[0]-1))/2;
        }
        cout<<sum;
        cout<<"\n";
    }
    return 0;
}