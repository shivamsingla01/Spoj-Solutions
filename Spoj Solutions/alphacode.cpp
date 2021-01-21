#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while(cin >> s){
		if(s[0]=='0')break;
		int n=s.size();
		int dp[n+1];
	  for(int i=0;i<n+1;i++)dp[i]=0;
		dp[0]=1;dp[1]=1;
		for(int i=2;i<=n;i++){
		
			if(s[i-1]!='0')dp[i]+=dp[i-1];
			int x=s[i-1]-'0' + 10*(s[i-2]-'0');
			if(x>9 && x<=26)dp[i]+=dp[i-2];
			
		}
		
		cout << dp[n] << endl;
	}
	
}