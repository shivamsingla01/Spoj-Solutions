#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin >> n){
	vector<vector<int>>dp(n,vector<int>(n)),smoke(n,vector<int>(n));
    for(int i=0;i<n;i++){cin >> dp[i][i];smoke[i][i]=0;}
    for(int l=2;l<=n;l++){
	for(int i=0;i<n-l+1;i++){
	int j=i+l-1;
	smoke[i][j]=INT_MAX;
	for(int k=i;k<j;k++){
	int x=dp[i][k]*dp[k+1][j]+smoke[i][k]+smoke[k+1][j];
    if(smoke[i][j]>x){
    smoke[i][j]=x;
    dp[i][j]=(dp[i][k]+dp[k+1][j])%100;
    }
	}
	}
	}
	cout << smoke[0][n-1] << endl;
}
return 0;
}