#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<bool>isprime(1e4+1,true);
//unordered_set<int>prime;
vector<int>adj[10001];
void init(){
for(int i=2;i*i<1e4;i++){
    if(isprime[i]){
        //if(i>1000)prime.insert(i);
        for(int j=2*i;j<1e4;j+=i){
            isprime[j]=false;
        }
    }
}
for(int i=1001;i<10000;i++){
string s=to_string(i);
for(int j=0;j<4;j++){
    for(char c='0';c<='9';c++){
        if(c==s[j] ||(j==0 && c=='0'))continue;
        char temp=s[j];
        s[j]=c;
        if(isprime[stoi(s)])adj[i].push_back(stoi(s));
        s[j]=temp;
    }
}
}

}

void solve(){
int n,m;
cin >> n >> m;
if(!isprime[n] || !isprime[m]){
    cout << "Impossible"<< endl;return;
}
vector<int>dist(1e4+1,-1);
dist[n]=0;
queue<int>q;
q.push(n);
while(!q.empty()){
    int len=q.size();
    while(len--){
        int i=q.front();q.pop();
        for(int j:adj[i]){
          if(dist[j]==-1){
              dist[j]=dist[i]+1;
              q.push(j);
          }
        }
        
            }
}

if(dist[m]==-1)cout << "Impossible" << endl;
else cout << dist[m] << endl;

}
int main(){
    init();
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}