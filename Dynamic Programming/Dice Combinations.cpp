#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
const int M = 1e9 + 7;
const int N = 1e6 + 7;
 
int dp[N];
 
int count(int n){
 
    if(n == 0) return 1;
    if(dp[n] != -1) return dp[n];
    
    int ways = 0;
    for(int i = 1; i <= 6; i++){
        if(n - i >= 0){   
            ways += count(n - i);
            ways %= M;
        }
    }
    return dp[n] = ways;
}
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    memset(dp, -1, sizeof dp);
 
    int n; cin >> n;
 
    cout << count(n) << endl;
 
}
