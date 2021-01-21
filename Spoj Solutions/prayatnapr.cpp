#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>adj[],int x,int *visit){
	visit[x]=1;
	for(int i=0;i<adj[x].size();i++){
	if(visit[adj[x][i]]==0){
	dfs(adj,adj[x][i],visit);
	}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
	int n,e;
	cin >> n;
	cin >> e;
	vector<int>adj[n];
    
    for(int i=0;i<e;i++){
    int a,b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
    }
    int count=0;
    int visit[n]={0};
    for(int i=0;i<n;i++){
    if(visit[i]==0){
    count++;
    dfs(adj,i,visit);
    }
    }
    cout << count << endl;
	}
}