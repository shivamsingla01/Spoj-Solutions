#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	int n;cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)cin >> arr[i];
	int dp1[n],dp2[n];
	for(int i=0;i<n;i++){
	dp1[i]=1;
	for(int j=0;j<i;j++){
	if(arr[i]>arr[j])dp1[i]=max(dp1[i],dp1[j]+1);
	}
	}
	for(int i=n-1;i>=0;i--){
	dp2[i]=1;
	for(int j=n-1;j>i;j--){
	if(arr[i]>arr[j])dp2[i]=max(dp2[i],dp2[j]+1);
	}
	}
	int maxm=0;
	for(int i=0;i<n;i++)maxm=max(maxm,dp1[i]+dp2[i]);
	cout << maxm-1 << endl;
	}
}