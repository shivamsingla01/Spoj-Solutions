#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll find_root(ll x,vector<ll>&root){
	while(x!=root[x]){
	root[x]=root[root[x]];
	x=root[x];
	}
	return x;
}
void union1(ll x,ll y,vector<ll>&root){
	ll a=find_root(x,root);
	ll b=find_root(y,root);
	root[b]=root[a];
	}
int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    ll p,n,m;
    cin >> p>>n>>m;
    vector<pair<ll,pair<ll,ll>>>v(m);
    for(ll i=0;i<m;i++){
    int a,b,c;
    cin >> a>> b >> c;
    v[i].first=c;
    v[i].second.first=a;
    v[i].second.second=b;
    }
    sort(v.begin(),v.end());
    vector<ll>root(n+1);
    for(ll i=0;i<n;i++)root[i]=i;
    ll cost=0;
    for(ll i=0;i<m;i++){
    ll x=v[i].second.first;ll y=v[i].second.second;
    if(find_root(x,root)!=find_root(y,root)){
    union1(x,y,root);cost+=v[i].first;
    }
    }
    cout << p*cost << endl;
    }

	return 0;
}