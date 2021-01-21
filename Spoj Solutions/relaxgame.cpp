#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll a,b;
	while(cin >>a >> b){
	if(a== -1)break;
	ll x=max(a,b);ll y=1;
	for(int i=1;i<=min(a,b);i++)y*=(x+i);
	ll z=1;
	for(int i=1;i<=min(a,b);i++){
	z*=i;
	}
	y=y/z;
	cout << a << "+" << b;
	if(y== a+b)cout << "=";
	else
	cout << "!=";
	cout << a+b << endl;

	}
}