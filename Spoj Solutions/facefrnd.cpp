#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ppi;
int main(){
	map<int,int>m;
	int n;
	cin >> n;int y=0;
	for(int i=0;i<n;i++){
	int x;
	cin >> x;
	if(m.find(x)==m.end())
	m.insert(ppi(x,1));
	else
    m[x]=1;
    int z;
    cin >> z;
    for(int j=0;j<z;j++){
    int k;cin >> k;
    if(m.find(k)==m.end()){
    m.insert(ppi(k,0));
    }
    }

	}
	for(itr = m.begin(); itr != m.end(); ++itr){
	if(itr->second ==0){
	y++;
	}
	}
   cout << y;
	return 0;
}