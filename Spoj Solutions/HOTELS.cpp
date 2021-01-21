#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n;
	cin >> n;
	ll m;
	cin >> m;
	ll arr[n];
	deque<int>q;
	for(int i=0;i<n;i++){
	cin >> arr[i];
	}
	ll sum=0;
	ll bestsum=0;
	for(int i=0;i<n;i++){
	
	sum+=arr[i];
	q.push_back(arr[i]);
	while(sum>m){
	sum-=q.front();
	q.pop_front();
	}
	if(sum>bestsum && sum<=m)bestsum=sum;
}
	
	cout << bestsum << endl;
}