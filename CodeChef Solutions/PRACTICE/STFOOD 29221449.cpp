    /*
        author:@bhaskar_8998
    */
    #include<bits/stdc++.h>
    #include <ext/pb_ds/assoc_container.hpp>
    #include <ext/pb_ds/tree_policy.hpp> 
    #include <functional>
    using namespace __gnu_pbds; 
    using namespace std;
    typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;  
    typedef long long i64;
    typedef vector<int> vi;
    typedef vector<long> vl;
    typedef pair<i64,i64> pll;
    typedef map<i64,i64> ml;
    #define pb push_back
    #define MOD 1000000007
    #define debug puts("Q");
    #define fastio() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
    int main(){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
        #endif
        fastio();
        clock_t beg=clock();
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++){
                int a,b,c;
                cin>>a>>b>>c;
                a+=1;
                arr[i]=c*floor(b/a);
            }
            sort(arr,arr+n);
            cout<<arr[n-1]<<"\n";
        }
        clock_t end=clock(); 
        fprintf(stderr, "%lf sec\n", (double)(end-beg)/(CLOCKS_PER_SEC));
        return 0;
    }