#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int dp[n][n];
	memset(dp,0,sizeof(dp));
	int arr[n];
	for(int i=0;i<n;i++){
	cin >> arr[i];
	dp[i][i]=arr[i]*n;
	}
	for(int i=1;i<=n-1;i++){
	  for(int j=0;j<n-i;j++){
	  dp[j][j+i]=max(dp[j+1][j+i]+(n-i)*arr[j],dp[j][j+i-1]+(n-i)*arr[j+i]);
	  }
	}
	cout << dp[0][n-1] << endl;
}