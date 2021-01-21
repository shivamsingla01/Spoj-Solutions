#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	string a,b;
	cin >> a;
	cin >> b;
	int n=a.size();
	int m=b.size();
	int arr[n][m];
	if(a[0]==b[0])
	arr[0][0]=0;
	else arr[0][0]=1;
	int flag=1;
	for(int i=1;i<n;i++){
    if(flag==1 && a[i]==b[0]){
    flag=0;arr[i][0]=arr[i-1][0];
    }
    else
	arr[i][0]=arr[i-1][0]+1;}
	flag=1;
	for(int i=1;i<m;i++){
    if(flag==1 && a[0]==b[i]){
    flag=0;arr[0][i]=arr[0][i-1];
    }
    else
	arr[0][i]=arr[0][i-1]+1;}
    for(int i=1;i<n;i++){
     for(int j=1;j<m;j++){
      if(a[i]==b[j])arr[i][j]=arr[i-1][j-1];
      else
      arr[i][j]=min(arr[i-1][j-1],min(arr[i-1][j],arr[i][j-1]))+1;
     }
    }
    cout << arr[n-1][m-1] << endl;

	}

}