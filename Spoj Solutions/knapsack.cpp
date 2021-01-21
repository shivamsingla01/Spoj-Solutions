#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int s,n;
	cin >> s >> n;
	ll value[n],size[n];
	for(int i=0;i<n;i++)cin >>size[i] >> value[i];
	ll dp[n][s+1];
	for(int i=0;i<n;i++)dp[i][0]=0;
	for(int i=1;i<=s;i++){
	if(i>=size[0])dp[0][i]=value[0];
	else dp[0][i]=0;
	}
	for(int i=1;i<n;i++){
	for(int j=1;j<=s;j++){
	if(j<size[i])dp[i][j]=dp[i-1][j];
	else dp[i][j]=max(dp[i-1][j],value[i]+dp[i-1][j-size[i]]);
	}
}
cout << dp[n-1][s] << endl;
}