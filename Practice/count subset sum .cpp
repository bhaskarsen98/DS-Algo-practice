#include<bits/stdc++.h>

using namespace std;

void fileio(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
  #endif

}

int cntSubsetSum(vector<int> &arr, int S) {
    int n = arr.size();

    int t[n + 1][S + 1];
    fill(&t[0][0], &t[0][0]+sizeof(t)/sizeof(t[0][0]), 0);

    for(int i = 0; i < n + 1; i++) {
        t[i][0] = 1;
    }

    for(int i = 1; i < n + 1; i++) {

        for(int j = 1; j < S + 1; j++) {
            if(arr[i - 1] <= j) {
                t[i][j] = t[i - 1][j] + t[i - 1][j - arr[i - 1]];
            }
            else
                t[i][j] = t[i - 1][j];
        }
    }

    return t[n][S];

}


int main() {
    
    fileio();

    int n, S;
    cin>>n >>S ;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    cout<<cntSubsetSum(arr, S);

}