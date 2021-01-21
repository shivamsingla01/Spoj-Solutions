#include<bits/stdc++.h>
using namespace std;

int main(){
	float x;
	cin >> x;
	while(x!=0.00){
    float i=1.00;
    float ans=0.00;

	while(ans<=x){
	i++;
	float k=1/i;
	ans+=k;
    
	}
   
   cout << i-1 << " card(s)" << endl;

}}