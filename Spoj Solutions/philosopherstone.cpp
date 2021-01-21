#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	int r,c;
	cin >> r >> c;
	int t[r][c];
	for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
	cin >> t[i][j];
	}
	}
	
	int dp[r][c];
	for(int i=0;i<c;i++)dp[0][i]=t[0][i];

	for(int i=1;i<r;i++){
	dp[i][0]=t[i][0]+max(dp[i-1][0],dp[i-1][1]);
	dp[i][c-1]=t[i][c-1]+max(dp[i-1][c-1],dp[i-1][c-2]);
	for(int j=1;j<c-1;j++){
	dp[i][j]=t[i][j]+max(dp[i-1][j],max(dp[i-1][j+1],dp[i-1][j-1]));
	}
	}
	int max=INT_MIN;
	for(int i=0;i<c;i++){
	if(dp[r-1][i]>max)max=dp[r-1][i];
	}
	cout << max << endl;

	}

}