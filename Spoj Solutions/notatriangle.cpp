#include<bits/stdc++.h>
using namespace std;
int check(int x,int arr[],int n,int low){
	int high=n-1;int ans=-1;
	while(high>=low){
	int mid=(high+low)/2;
	
	
	if(arr[mid]>x){
	ans=mid;
	high=mid-1;
	}
	else{
	low=mid+1;
	}
	}
	
	if(ans== -1)return 0;
	return n-ans; 
}
int main(){
int n;
while(cin >> n){
	if(n==0)break;
	int arr[n];
	for(int i=0;i<n;i++)cin >> arr[i];
	sort(arr,arr+n);
	
	int ans=0;
	for(int i=0;i<n-1;i++){
   
    for(int j=i+1;j<n;j++){
    
    ans+=check(arr[i]+arr[j],arr,n,j+1);
    }
	}
	cout << ans << endl;
}	
}