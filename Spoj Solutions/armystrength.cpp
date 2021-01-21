#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	int g,m;
	cin >> g >> m;
	int a[g];int b[m];
	for(int i=0;i<g;i++)cin >> a[i];
	for(int i=0;i<m;i++)cin >> b[i];
    int i=0;int j=0;
    sort(a,a+g);
    sort(b,b+m);
     
	while(g&&m){
	if(a[i]>=g[j]){
	j++;m--;
	}
	else{i++;g--;}
	}
	if(g!=0)cout << "Godzilla" << endl;
	if(m!=0)cout << "MechaGodzilla" << endl;
	if(m==0&&g==0)cout << "uncertain" << endl;
	}
}