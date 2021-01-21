#include<bits/stdc++.h>
using namespace std;
#define ll long long
 int bfs(int x,vector<pair<int,ll>>adj[],ll *dist,int n){
    int visited[n+1]={0};
	visited[x]=1;
	queue<int>q;
	q.push(x);
	ll maxm=0;int z;
		while(!q.empty()){
	int k=q.front();
	q.pop();
	for(int i=0;i<adj[k].size();i++){
	if(visited[adj[k][i].first]==0){
	dist[adj[k][i].first]=dist[k]+adj[k][i].second;
	visited[adj[k][i].first]=1;
	q.push(adj[k][i].first);
	}
	}
	}
	for(int i=1;i<n+1;i++){
	if(maxm<dist[i]){z=i;maxm=dist[i];}
	}
	return z;

}
int main(){
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	vector<pair<int,ll> >adj[n+1];
	int k;
	for(int i=0;i<n-1;i++){
	int u,v;ll d;
	cin >> u >> v >>d;
	if(i==0)k=u;
	adj[u].push_back(make_pair(v,d));
	adj[v].push_back(make_pair(u,d));
	}
	ll dis2[n+1]={0};ll dis1[n+1]={0};ll dis3[n+1]={0};
	int y=bfs(k,adj,dis1,n);
   
    
    int z=bfs(y,adj,dis2,n);
    int b=bfs(z,adj,dis3,n);
    
    for(int i=1;i<n+1;i++){
    cout << max(dis2[i],dis3[i]) << " ";
    }

   cout <<endl;

	}
}