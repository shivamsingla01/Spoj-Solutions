#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	int arr[26];
	cin >> n >> m;
	for(int i=0;i<26;i++)cin >> arr[i];
	string s;
	string t;
	cin >> s;
	cin >> t;
	int ans[n+1][m+1];
	for(int i=0;i<=n;i++)ans[i][0]=0;
	for(int j=0;j<=m;i++)ans[0][j]=0;
	for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
	if(s[n-i]==t[m-j]){
    ans[i][j]=ans[i-1][j-1]+arr[s[n-i]-'a'];
	}
	else{
	ans[i][j]=max(ans[i-1][j],ans[i][j-1]);
	}
	}
	}
	cout << ans[n][m] << endl;
}