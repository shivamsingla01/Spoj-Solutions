#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	string s;
	cin >> s;
	string t;
	t=s;
	reverse(t.begin(),t.end());
	int n=s.size();
	int ans[n+1][n+1];
	
	for(int i=0;i<=n;i++){ans[i][0]=0;ans[0][i]=0;}
	for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
	if(s[n-i]==t[n-j]){
	ans[i][j]=ans[i-1][j-1]+1;
	}
	else{
	ans[i][j]=max(ans[i-1][j],ans[i][j-1]);
	}
	}
	}
    cout << n-ans[n][n] << endl;

	}
}