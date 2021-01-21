#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;cin >> n >> m;
	int arr[26];
	for(int i=0;i<26;i++)cin >> arr[i];
	string a,b;
	cin >> a;cin >> b;
	int lcs[n+1][m+1];
	
	memset(lcs,0,sizeof(lcs));
	for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
	if(a[i-1]==b[j-1])
	lcs[i][j]=lcs[i-1][j-1]+arr[b[j-1]-'a'];
	else
	lcs[i][j]=max(lcs[i-1][j-1],max(lcs[i][j-1],lcs[i-1][j]));
	}
	}
	cout << lcs[n][m] << endl;

}