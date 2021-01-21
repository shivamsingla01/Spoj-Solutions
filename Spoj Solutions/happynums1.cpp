#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
map<ll,ll>m;
ll check(ll n,ll &x){
	if(n==1)return 1;
	if(m[n]==0){
	m[n]++;
	x+=1;
	ll y=0;
	while(n!=0){
	y+=(n%10)*(n%10);
	n/=10;
	}
	
	return check(y,x);}
	else return -1;
}
int main(){
	ll n;
	cin >> n;
	ll x=0;
	int z=check(n,x);
	
	if(z==1)
	cout << x << endl;
	else
	cout << z << endl;
}