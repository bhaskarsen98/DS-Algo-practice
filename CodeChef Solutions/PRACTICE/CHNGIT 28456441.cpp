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
    int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997};
    int main(){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
        #endif
        //cout<<sizeof(prime)/sizeof(int);
        fastio();
        clock_t beg=clock();
        int t;

        cin>>t;
        while(t--){
            int n;
            cin>>n;
            ml m;
            m.clear();
            i64 ct,mx=0;
            for(int i=0;i<n;i++){
                cin>>ct;
                m[ct]+=1;
            }
            for(auto i=m.begin();i!=m.end();i++){
                ct=i->second;
                mx=max(mx,ct);
            }
            cout<<n-mx<<"\n";

        }
        clock_t end=clock(); 
        fprintf(stderr, "%lf sec\n", (double)(end-beg)/(CLOCKS_PER_SEC));
        return 0;
    }