#include<bits/stdc++.h>
using namespace std;
bool bfs(vector<int>adj[],int x,int *color){
	color[x]=0;
	queue<int>q;
	q.push(x);
	while(!q.empty()){
	int k=q.front();
	q.pop();
	for(int i=0;i<adj[k].size();i++){
	if(color[adj[k][i]]==-1){color[adj[k][i]]=1-color[k];q.push(adj[k][i]);}
	else{
	if(color[adj[k][i]]==color[k])return false;
	}
	}
	}
	return true;
}
int main(){
	int t;
	cin >> t;int z=1;
	while(t--){
	int v,e;
	cin >> v >> e;
	vector<int>adj[v+1];
	for(int i=0;i<e;i++){
	int a,b;
	cin >> a >> b;
	adj[a].push_back(b);
	adj[b].push_back(a);
	}
	int color[v+1];int flag=1;
	memset(color,-1,(v+1)*sizeof(int));
	for(int i=1;i<v+1;i++){

    if(color[i]==-1){
    if(!bfs(adj,i,color)){flag=0;break;}
    }
	}
	cout << "Scenario " << "#" << z << ":" << endl;
	if(flag==0){cout << "Suspicious bugs found!"<< endl;}
	else{cout << "No suspicious bugs found!" << endl;}
    z++;
	}
}