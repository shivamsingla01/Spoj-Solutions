#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll phi[10001];
void etf(){
	for(int i=0;i<=10000;i++)phi[i]=i;
	for(int i=2;i<=10000;i++){
	if(phi[i]==i){
	phi[i]=i-1;
	for(int j=2*i;j<=10000;j+=i){
	phi[j]-=phi[j]/i;
	}
	}
	}
int main(){
	etf();
	for(int i=1;i<=10000;i++){
	phi[i]+=phi[i-1];
	}
	ll t;
	cin >> t;
	while(t--){
	ll n;
	cin >> n;
	cout << phi[n]*phi[n] << endl;
	}
}