#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	int v;
	cin >> v;
	vector<pair<int,int> >adj[v+1];
	int k;
	for(int i=0;i<v-1;i++){
	int a,b,c;

	cin >>a >> b >> c;
		if(i==0)k=a;
	adj[a].push_back(make_pair(b,c));
	adj[b].push_back(make_pair(a,c));
	}
	int vis[v+1]={0};
	int dis[v+1]={0};
	vis[k]=1;
	queue<int>q;
	q.push(k);
	while(!q.empty()){
	int x=q.front();
	q.pop();
	for(int i=0;i<adj[x].size();i++){
	if(vis[adj[x][i].first]==0){
	vis[adj[x][i].first]=1;
	q.push(adj[x][i].first);
	if(dis[x]+adj[x][i].second>dis[adj[x][i].first])dis[adj[x][i].first]=dis[x]+adj[x][i].second;
	}
	}
	}
	int maxm=0;
	for(int i=1;i<v+1;i++){
	if(maxm<dis[i]){maxm=dis[i];k=i;}
	}
	
	int vis2[v+1]={0};
	int dis2[v+1]={0};
	vis2[k]=1;
	queue<int>q1;
	q1.push(k);
	while(!q1.empty()){
	int x=q1.front();
	q1.pop();
	for(int i=0;i<adj[x].size();i++){
	if(vis2[adj[x][i].first]==0){
	vis2[adj[x][i].first]=1;
	q1.push(adj[x][i].first);
	if(dis2[x]+adj[x][i].second>dis2[adj[x][i].first])dis2[adj[x][i].first]=dis2[x]+adj[x][i].second;
	}
	}
	}
	int ans=0;
    for(int i=1;i<v+1;i++){
	ans=max(ans,dis2[i]);}
	cout << ans << endl;

	}
}