#include<bits/stdc++.h>
using namespace std;
bool sortby(pair<int,int>a,pair<int,int>b){
	if(a.first==b.first)return a.second<b.second;
	return a.first<b.first;
}
int main(){
	int t;
	cin >> t;
	while(t--){
     int n;
     cin >> n;
     vector<pair<int,int>>v(n);
     for(int i=0;i<n;i++){
     int x;cin >> x;
     v[i].first=x;
     }
     for(int i=0;i<n;i++){
     int x;cin >> x;
     v[i].second=x;
     }
     sort(v.begin(),v.end(),sortby);
     int maxm=0;
     int dp[n];
     for(int i=0;i<n;i++){
     	dp[i]=1;
     	for(int j=0;j<i;j++){
     		if(v[j].second<v[i].second)
     		dp[i]=max(dp[i],dp[j]+1);
     	}
     	maxm=max(dp[i],maxm);
     }
     cout << maxm << endl;

	}
}