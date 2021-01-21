#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll phi[1000001],ans[1000001];
void etf(){
	for(ll i=0;i<=1000000;i++)phi[i]=i;
	for(ll i=2;i<=1000000;i++){
	if(phi[i]==i){phi[i]=i-1;
	for(ll j=2*i;j<=1000000;j+=i){
    phi[j]-=phi[j]/i;
	}
	}
}}
void lcmsum(){
	etf();
	for(ll i=0;i<=1000000;i++)ans[i]=0;
	for(ll i=1;i<=1000000;i++){
	for(ll j=i;j<=1000000;j+=i){
	ans[j]+=(i*phi[i]);
	}
	}
}
int main(){
	ll t;
	cin >> t;
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	lcmsum();
	while(t--){
	ll n;
	cin >> n;
	ll answer=ans[n];
	answer=(answer+1)*n;
	cout << answer/2 << "\n";
	}

}