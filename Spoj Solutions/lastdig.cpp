#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

ll t;
cin >> t;
while(t--){
ll a,b;
cin >> a >> b;
ll k=a%10;
if(k==0 || k==1 || k==5 || k==6)
cout << k << endl;
if(k==2 || k==8 || k==3 || k==7){
    ll j=b%4;
    if(j==0){ll x=pow(k,4)%10;cout << x << endl;}
    else ll x=pow(k,j)%10;cout << x << endl;
}


if(k==9 || k==4){
	ll j=b%2;
	ll x=pow(k,j+1)%10
	cout << x << endl;
}
}


}