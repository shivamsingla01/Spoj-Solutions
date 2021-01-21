#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll gcd(ll a,ll b){
	if(a==0)return b;
	return gcd(b%a,a);
}
int main(){
	ll arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr,arr+3);
	cout << gcd(gcd(arr[0],arr[1]),arr[2]) << endl;

}