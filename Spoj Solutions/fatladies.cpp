#include<bits/stdc++.h>

using namespace std;
#define ul unsigned long long

int main(){
	int t;
	cin >> t;
	while(t--){
	ul k;
	cin >> k;
	if(k==1)
	cout << "192" <<endl;
	else{
	ul ans=192+(k-1)*250;
	cout << ans << endl;
	}
	}

}