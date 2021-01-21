#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)cin >> arr[i];
	int dp[n];
	for(int i=0;i<n;i++)dp[i]=1;
	for(int i=1;i<n;i++){
	for(int j=i-1;j>=0;j--){
	if(((arr[i]>0 && arr[j] <0)|| (arr[i]<0 && arr[j]>0))&&(abs(arr[i])>abs(arr[j]))){
	if(dp[i]<dp[j]+1)dp[i]=dp[j]+1;
	}
	}

	}
	int max=dp[0];
	for(int i=1;i<n;i++){
		if(dp[i]>max)max=dp[i];
	}
	
	cout << max << endl;
}