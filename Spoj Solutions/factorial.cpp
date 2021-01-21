#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll getans(ll n){
	ll x=0;
	ll i=5;
	while(i<=n){
	x+=(n/i);
	i*=5;
	}
	return x;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
    ll n;
    cin >> n;
    cout << getans(n) << endl;
    }	
  

}