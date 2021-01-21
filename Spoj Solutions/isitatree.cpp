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

int main(){
     int n,m;
     cin >> n >> m;
     if(m!=n-1){
     cout << "NO" << endl;
     }
     else{
     vector<int>adj[n+1];
     for(int i=0;i<m;i++){
     int a,b;
     cin >> a >> b;
     adj[a].push_back(b);
     adj[b].push_back(a);
     }
     int visit[n+1]={0};int k=0;
     for(int i=1;i<n+1;i++){
     if(visit[i]==0){
     dfs(adj,i,visit);
     k++;
     }
     }
     
     if(k==1)cout << "YES" << endl;
     else{
     cout << "NO" << endl;}
     }
}