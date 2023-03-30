#include<bits/stdc++.h>
using namespace std;
    
#define ll long long
#define endl '\n'
const int N = 1e6 + 10 ;
 
int dp[N];
 
ll func(int amount, vector<int> &coins){
    if(amount == 0) return 0;
    if(dp[amount] != -1) return dp[amount] ;
 
    ll ans = INT_MAX;
    for(int coin : coins ){
       if(amount - coin >= 0)
       ans = min(ans, func(amount - coin, coins) + 1);
    }
    
    return dp[amount] = ans;
 }
 
int main() {
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    memset(dp, -1, sizeof(dp));
 
    int n, amount;
    cin >> n >> amount;
 
    vector<int> coins;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        coins.push_back(x);
    }
 
    int mini = func(amount, coins);
 
    if(mini == INT_MAX) cout << -1 << endl;
    else cout << mini << endl;
}