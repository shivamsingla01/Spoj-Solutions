#include<bits/stdc++.h>
using namespace std;
#define ul unsigned long long
bool checkpow(ul x){
	return (x && !(x&x-1));
}
int main(){
ul n;
cin >> n;
if(n==1)
cout << "NIE";
elif(checkpow(n)){
	cout << "TAK";
}
else
cout << "NIE";



}