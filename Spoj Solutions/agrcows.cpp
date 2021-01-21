#include<bits/stdc++.h>
using namespace std;
#define ul usigned long long
bool check(ul a[],ul x,ul c,ul n){
	int count=1;
	int prev_pos=0;
	for(int i=1;i<n;i++){
	if(a[i]-a[prev_pos]>=x){count++;prev_pos=i;}
	if(count==c)return true;
	}
    return false;}

int main(){
	int t;
	cin >> t;
	while(t--){
	ul n,c;
	cin >> n >> c;
	ul a[n];
	for(int i=0;i<n;i++)cin >> a[i];
	sort
	
    ul start=0;ul ans=0;
    ul end=a[n-1]-a[0];
    while(start<=end){
    ul mid=start+(end-start)/2;
    if(check(a,mid,c,n)){ans=mid;start=mid;}
    else end=mid-1;
    }
	cout << ans << endl;
	}

}