#include<bits/stdc++.h>
using namespace std;
vector<int>spf(1e7+1);
vector<int>prime;
void findprime(){
for(int i=0;i<=1e7;i++)spf[i]=i;
for(int i=2;i<=1e7;i++){
if(spf[i]==i){
	prime.push_back(i);}
	for(int j=0;j<prime.size()&&prime[j]<=spf[i]&&i*prime[j]<=1e7;j++){
	spf[i*prime[j]]=prime[j];
	}

}

}
int find_root(int x,vector<int>&root){
	while(x!=root[x]){
	root[x]=root[root[x]];
	x=root[x];
	}
	return x;
}
void union1(int x,int y,vector<int>&root,vector<int>&size){
	int a=find_root(x,root);
	int b=find_root(y,root);
	if(size[a]>=size[b]){
     root[b]=a;
     size[a]+=size[b];
	}
	else{
	root[a]=b;
	size[b]+=size[a];
	}
}
int main(){
findprime();
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin >> t;
while(t--){
int n,m;cin >> n >> m;
if(m==0){cout << "-1\n";continue;}
vector<int>root(n+1);
vector<int>size(n+1,1);
for(int i=0;i<=n;i++)root[i]=i;
for(int i=0;i<m;i++){
	int x,y;cin >> x>>y;
	if(find_root(x,root)!=find_root(y,root)){
	union1(x,y,root,size);
	}
}
int maxm=0;
for(int i=1;i<=n;i++)maxm=max(maxm,size[i]);
cout << prime[maxm-1] << endl;
}
	return 0;
}