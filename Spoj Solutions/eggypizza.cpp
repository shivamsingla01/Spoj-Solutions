#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s;
	map<float,int>m;
	for(int i=0;i<n;i++){
    cin >> s;
    if(s=="1/2")m[0.5]++;
    if(s=="3/4")m[0.75]++;
    if(s=="1/4")m[0.25]++;
	}
	int x=1;
	x+=(m[0.5]/2+m[0.5]%2);
	if(m[0.5]%2 !=0){if(m[0.25]>2)m[0.25]-=2;
		else
		m[0.25]=0;
	}
	if(m[0.25]<=m[0.75]){
	x+=(m[0.25]+abs(m[0.25]-m[0.75]));}
	else{
		x+=(m[0.75]);
		m[0.25]-=m[0.75];
		x+=(m[0.25]/4);
		if(m[0.25]%4!=0)x+=1;
	}
	cout << x << endl;
}