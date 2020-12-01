#include<bits/stdc++.h>
using namespace std;
#define pll pair<long,long>
#define f   first
#define s   second
int main(){
    int t;
    cin>>t;
    while(t--){
        long n,m,k;
        cin>>n>>m>>k;
        set <pll> v1;
        vector <pll> v;
        for(long i=0;i<k;i++){
            pll ct;
            cin>>ct.f>>ct.s;
            v1.insert(ct);
            v.push_back(ct);
        }
        long fence=0;
        //sort(v.begin(),v.end());
        
        if(k==n*m){cout<<2*m+2*n<<"\n";continue;}
        for(long i=0;i<k;i++){
            pll p=make_pair(0, 0);
            if((v[i].f==1||v[i].f==n)&&(v[i].s==1||v[i].s==m)){
                //cout<<"b1\n";
                fence+=2;
                if(v[i].f==1&&v[i].s==1){//{1,1}
                    p=make_pair(v[i].f+1,v[i].s);//2
                        if(v1.find(p) == v1.end())    fence+=1;
                    p=make_pair(v[i].f,v[i].s+1);//4
                        if(v1.find(p) == v1.end())    fence+=1; 
                }
                else if(v[i].f==1&&v[i].s==m){//{1,m}
                    p=make_pair(v[i].f+1,v[i].s);//2
                    if(v1.find(p) == v1.end())    fence+=1;
                    p=make_pair(v[i].f,v[i].s-1);//3
                    if(v1.find(p) == v1.end())    fence+=1;
                }
                else if(v[i].f==n&&v[i].s==1){//{n,1}
                    p=make_pair(v[i].f-1,v[i].s);//1
                    if(v1.find(p) == v1.end())    fence+=1;    
                    p=make_pair(v[i].f,v[i].s+1);//4
                    if(v1.find(p) == v1.end())    fence+=1;
                }
                else if(v[i].f==n&&v[i].s==m){//{n,m}
                    p=make_pair(v[i].f-1,v[i].s);//1
                    if(v1.find(p) == v1.end())    fence+=1;
                    p=make_pair(v[i].f,v[i].s-1);//3
                    if(v1.find(p) == v1.end())    fence+=1;
                    
                }
            }
            else if(v[i].f==1||v[i].f==n||v[i].s==1||v[i].s==m){
                //cout<<"b2\n";
                fence+=1;
                if(v[i].f==1){//{1,x}
                    p=make_pair(v[i].f+1,v[i].s);//2
                    if(v1.find(p)== v1.end())    fence+=1;
                    p=make_pair(v[i].f,v[i].s-1);//3
                    if(v1.find(p) == v1.end())    fence+=1;
                    p=make_pair(v[i].f,v[i].s+1);//4
                    if(v1.find(p) == v1.end())    fence+=1;
                }
                else if(v[i].s==m){//{x,m}
                    p=make_pair(v[i].f-1,v[i].s);//1
                    if(v1.find(p) == v1.end())    fence+=1;
                    p=make_pair(v[i].f+1,v[i].s);//2
                    if(v1.find(p) == v1.end())    fence+=1;
                    p=make_pair(v[i].f,v[i].s-1);//3
                    if(v1.find(p) == v1.end())    fence+=1;
                }
                else if(v[i].f==n){//{n,x}
                    p=make_pair(v[i].f-1,v[i].s);//1
                    if(v1.find(p) == v1.end())    fence+=1;
                    p=make_pair(v[i].f,v[i].s-1);//3
                    if(v1.find(p) == v1.end())    fence+=1;
                    p=make_pair(v[i].f,v[i].s+1);//4
                    if(v1.find(p) == v1.end())    fence+=1;
                }
                else if(v[i].s==1){//{x,1}
                    p=make_pair(v[i].f-1,v[i].s);//1
                    if(v1.find(p)== v1.end())  fence+=1;
                    p=make_pair(v[i].f+1,v[i].s);//2
                    if(v1.find(p)== v1.end())  fence+=1;
                    p=make_pair(v[i].f,v[i].s+1);//4
                    if(v1.find(p)== v1.end())   fence+=1;
                }
            }
            else{
                //cout<<"b3\n";
                p=make_pair(v[i].f-1,v[i].s);//1
                if(v1.find(p)==v1.end())  fence+=1;
                p=make_pair(v[i].f+1,v[i].s);//2
                if(v1.find(p)==v1.end())  fence+=1;
                p=make_pair(v[i].f,v[i].s-1);//3
                if(v1.find(p)==v1.end())  fence+=1;
                p=make_pair(v[i].f,v[i].s+1);//4
                if(v1.find(p)==v1.end())  fence+=1;
            }
        }
        cout<<fence<<"\n";
    }
    return 0;
}