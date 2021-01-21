#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll calculate(ll n,ll dp[1000001]){
	if(n<=1000000)return dp[n];
	else
	return max(n,calculate(n/2,dp)+calculate(n/3,dp)+calculate(n/4,dp));
}
int main(){
	ll n;
	ll dp[1000001];
	dp[0]=0;
	for(ll i=1;i<=1000000;i++){
	dp[i]=max(i,dp[i/2]+dp[i/3]+dp[i/4]);
	}
	while(cin >> n){
    cout << calculate(n,dp) << endl;
	}
}