#include<bits/stdc++.h>
using namespace std;

bool checkstring(string s){
	int i=0;
	while(i<s.size()){
	if(s[i]=='m')
	 return true;
    i++;
	}
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
	string a,b,c,d,e;
	cin >> a >> b >> c >> d >> e;
	
	if(checkstring(a)){
	int x=stoi(e);int y=stoi(c);
    
	cout << x-y << " " << b << " " << c << " " << d << " " << e << endl;
	}
	else {if(checkstring(c)){
	int x=stoi(e);int y=stoi(a);
     
	cout << a << " " << b << " " << x-y << " " << d << " " << e << endl;
	}
	else{
	int x=stoi(a);int y=stoi(c);
    
	cout << a << " " << b << " " << c << " " << d << " " << x+y << endl;
	}}
	}

}