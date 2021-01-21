#include<bits/stdc++.h>
using namespace std;
void build(vector<int>&tree,vector<int>&v;int i,int j,int node){
	if(i==j){
	tree[node]=v[i];
	return;
	}
	int mid=(i+j)/2;
	build(tree,v,i,mid,2*node);
	build(tree,v,mid+1,j,2*node+1);
	tree[node]=min(tree[2*node],tree[2*node+1]);
}
int solve(vector<int>&tree,int start,int end,int i,int j,int node){
if(end<i || j<start){
	return INT_MAX;
}
if(i<=start && end<=j)return tree[node];
int mid=(start+end)/2;
int ans1=solve(tree,start,mid,i,j,2*node);
int ans2=solve(tree,mid+1,end,i,j,2*node+1);
return min(ans1,ans2);
}
int main(){
	int n;
	cin >> n;
	vector<int>v(n);
    for(int i=0;i<n;i++)cin >> v[i];
    vector<int>tree(4*n);
    build(tree,v,0,n-1,1);
    int q;
    cin >> q;
    while(q--){
    int i,j;
    cin >> i >> j;
    cout << solve(tree,0,n-1,i,j,1) << endl;
    }
}