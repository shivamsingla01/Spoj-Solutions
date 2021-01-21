#include<bits/stdc++h>
using namespace std;
#define ll long long
ll phi[1000001];
void etf(){
	for(int i=0;i<=1000000;i++)phi[i]=i;
	for(int i=2;i<=1000000;i++){
	if(phi[i]==i){
	phi[i]=i-1;
	for(int j=2*i;j<=1000000;j+=i){
	phi[j]-=phi[j]/i;
	}
	}
	}
}
int main(){
	etf();
	ll t;
	cin >> t;
	while(t--){
	ll n;
	cin >> n;
	cout << phi[n] << endl;
	}
}