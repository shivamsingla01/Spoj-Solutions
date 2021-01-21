#include<bits/stdc++.h>
using namespace std;
bool compareit(pair<int,int>a,pair<int,int>b){
	if(a.second==b.second)return a.first<b.first;
	return a.second<b.second;
}
int main(){
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	vector<pair<int,int> > v(n);
	for(int i=0;i<n;i++){
	int a,b;
	cin >> a >> b;
	v[i].first=a;
	v[i].second=b;
    }
    sort(v.begin(),v.end(),compareit);
int x=1;
int finish=v[0].second;
    for(int i=1;i<n;i++){
    if(v[i].first>=finish){
    x++;finish=v[i].second;
    }}
    cout << x << endl;
	}

}