#include<bits/stdc++.h>
using namespace std;
#define ul long long
int main(){
	ul n;
	cin >> n;
	while(n!=-1){
	if((n-1)%6!=0)
	cout << "N" << endl;
    else{
    n=(n-1)/6;
    ul flag=0;ul ans=0;
    for(int i=1;i<=floor(sqrt(2*n));i++){
     ans+=i;
     if(ans==n){
     flag=1;break;
     }}
     if(flag==1)cout << "Y" << endl;
     else cout << "N" << endl;
    }
     cin >> n;
	 }}