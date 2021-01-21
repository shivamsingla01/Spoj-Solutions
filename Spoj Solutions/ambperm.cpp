#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n!=0){
	int a[n];
	int flag=1;
	for(int i=0;i<n;i++)cin >> a[i];
	for(int i=0;i<n;i++){
	if(a[a[i]-]!=i+1){
	flag=0;break;
	}}
    if(flag==0)cout << "not ambiguous" << endl;
    else cout << "ambiguous" << endl;
    cin >> n;

	}


}