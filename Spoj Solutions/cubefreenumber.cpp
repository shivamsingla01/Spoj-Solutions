#include<bits/stdc++.h>
using namespace std;

int main(){

	bool arr[1000001];
	for(int i=0;i<1000001;i++)arr[i]=true;
	
	for(int i=2;i<=100;i++){
	  if(arr[i]==true){
	  for(int j=i*i*i;j<=1000000;j+=(i*i*i)){
	  arr[j]=false;
	  }
	  }
	}
	
	int ans[1000001]={0};
	int x=1;
	for(int i=1;i<=1000000;i++){
	if(arr[i]==true){
	ans[i]=x;
	x++;
	}
	}
    int t;
    cin >> t;int i=1;
    while(t--){
    int n;
    cin >> n;
    if(ans[n]==0)cout << "Case " << i << ": Not Cube Free" << endl;
    else cout << "Case " << i << ": " << ans[n] << endl;
    i++;
    }

}