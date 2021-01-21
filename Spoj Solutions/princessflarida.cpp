#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;int i=0;
	while(t--){
	int n;
	cin >> n;i++;
	if(n==0){cout << "Case " << i << ": " << n <<endl;continue;} 
	 ll arr[n];
	for(int i=0;i<n;i++)cin >> arr[i];
	ll dp[n][2];
	dp[0][0]=arr[0];dp[0][1]=0;
	dp[1][0]=arr[1];dp[1][1]=arr[0];
	for(int i=2;i<n;i++){
	dp[i][0]=max(dp[i-2][0],dp[i-2][1])+arr[i];
	dp[i][1]=max(dp[i-1][0],dp[i-1][1]);
	}
	cout << "Case "<< i << ": "<< max(dp[n-1][0],dp[n-1][1]) << endl;
	}
}