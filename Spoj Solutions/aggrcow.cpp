#include<bits/stdc++.h>
using namespace std;
int verify(int arr[],int c,int y,int n){
	int i=1;c--;int k=0;
	while(c>0&&i<n){
	if(arr[i]-arr[k] >=y){c--;
	k=i;}
	i++;
	}
	if(c>0)return 0;
	else return 1;
}
int check(int arr[],int c,int low,int high,int n){
	int ans=0;
	while(high>=low){
	 int mid=(high+low)/2;
	if(verify(arr,c,mid,n)){
     ans=mid;
     low=mid+1;
	}
	else{
	high=mid-1;
	}
	}
	return ans;
}
int main(){
	int t;
	cin >> t;
	while(t--){
	int c,n;
	cin >> n >> c;
    int arr[n];
    for(int i=0;i<n;i++)cin >> arr[i];
    sort(arr,arr+n);
    int x=check(arr,c,0,arr[n-1]-arr[0],n);
    cout << x << endl;
	}

}