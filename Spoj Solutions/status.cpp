#include<bits/stdc++.h>
using namespace std;

#define ul unsigned long long

int main(){
	ul t;
	cin >> t;int j=1;
	while(j<=t){
	ul s,n;
	cin >> s >> n;
	ul a[n];
	for(int i=0;i<n;i++)cin >> a[i];
	sort(a,a+n);
	ul sum=0;
	ul x=0;
	for(int i=n-1;i>=0;i--){
	sum+=a[i];
    x++;
    if(sum>=s){break;}
	}
	cout << "Scenario #" << j << ":" << endl;
	if(sum<s){
	cout << "impossible" << endl;
	}
	else cout << x << endl;
	j++;
	}


}