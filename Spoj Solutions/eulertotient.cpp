#include<bits/stdc++.h>
using namespace std;

int main(){
	int phi[1000001];
   phi[0]=1;phi[1]=1;
   for(int i=2;i<=1000000;i++)phi[i]=i;
   for(int i=2;i<=1000000;i++){
    if(phi[i]==i){
      for(int j=i;j<=1000000;j+=i){
         phi[j]-=phi[j]/i;
      }
    }
   }
   int n;
	cin >> n;
   
	while(n--){
	int x;
	cin >> x;
    cout << phi[x] << endl;
	}
}