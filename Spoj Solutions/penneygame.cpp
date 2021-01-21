#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	int x;
	cin >> x;
	string s;
	cin >> s;
	map<string,int>m;
	for(int i=0;i<s.size()-2;i++){
	string t=s.substr(i,3);
	m[t]++;
	}
	cout<<x<<" "<<m["TTT"]<<" "<<m["TTH"]<<" "<<m["THT"]<<" "<<m["THH"]<<" "<<m["HTT"]<<" "<<m["HTH"]<<" "<<m["HHT"]<<" "<<m["HHH"]<<endl;

	}
}