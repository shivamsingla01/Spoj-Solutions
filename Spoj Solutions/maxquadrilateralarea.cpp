#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	double a,b,c,d,s;
    cin >> a >> b >> c >> d;
	s=(a+b+c+d)/2;
    double y=sqrt((s-a)*(s-b)*(s-c)*(s-d));
    cout << fixed << setprecision(2) << y << endl;
    
	}


}