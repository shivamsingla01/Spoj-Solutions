#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll k,vector<ll>v,ll m){
	ll sum=0;
	for(int i=0;i<v.size();i++){
	if(v[i]>k)
	sum+=(v[i]-k);
	}
	if(sum>=m)return true;
	return false;
}
int main(){
	ios::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	ll n,m;
	cin >> n >> m;
	vector<ll>v(n);
	for(int i=0;i<n;i++)cin >> v[i];
	sort(v.begin(),v.end());
	ll high=v[n-1],low=v[0];
	ll ans;
	while(high>=low){
    ll mid=(high+low)/2;
    if(check(mid,v,m)){
    low=mid+1;ans=mid;
    }
    else{
    high=mid-1;
    }
	}
    cout << ans << endl;

}