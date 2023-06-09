#include<bits/stdc++.h>
using namespace std;
    
#define ll long long
#define endl '\n'
const int mod = 1e9 + 7;
const int N = 1e6 + 7;
 
int n, x; 
int arr[107];
int dp[N];
 
ll func(int sum){
    if(sum == 0) return 1;
    if(sum < 0) return 0; //
 
    if(dp[sum] != -1) return dp[sum];
 
    ll ans = 0;
 
    for(int i = 0; i < n; i++){
       ans += func(sum - arr[i]); //
    }
 
    return dp[sum] = ans % mod;
}
    
int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    memset(dp, -1, sizeof dp);
 
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
 
    cout << func(x) << endl;    
}






