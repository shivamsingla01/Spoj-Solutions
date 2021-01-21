#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int v;
	cin >> v;
	vector<int>adj[v+1];
	int k;
	for(int i=0;i<v-1;i++){
	int a,b;

	cin >>a >> b;
		if(i==0)k=a;
	adj[a].push_back(b);
	adj[b].push_back(a);
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
	if(vis[adj[x][i]]==0){
	vis[adj[x][i]]=1;
	q.push(adj[x][i]);
	if(dis[x]+1>dis[adj[x][i]])dis[adj[x][i]]=dis[x]+1;
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
	if(vis2[adj[x][i]]==0){
	vis2[adj[x][i]]=1;
	q1.push(adj[x][i]);
	if(dis2[x]+1>dis2[adj[x][i]])dis2[adj[x][i]]=dis2[x]+1;
	}
	}
	}
	int ans=0;
    for(int i=1;i<v+1;i++){
	ans=max(ans,dis2[i]);}
	cout << ans << endl;

	
}