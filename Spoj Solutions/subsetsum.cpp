#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	int arr[n];
	int sum=0;
	for(int i=0;i<n;i++){
	cin >> arr[i];
	sum+=arr[i];
	}
	vector<vector<bool>>dp(n+1,vector<bool>(sum+1));
	for(int i=0;i<=n;i++)dp[i][0]=true;
	for(int i=1;i<=sum;i++)dp[0][i]=false;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=sum;j++){
    if(j<arr[i-1])dp[i][j]=dp[i-1][j];
    else
    dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
    }
    }
    int ans=0;
    for(int i=1;i<=sum;i++){
    if(dp[n][i])ans+=i;
    }
    cout << ans << endl;
	}
}