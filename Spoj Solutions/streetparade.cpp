#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n){
	queue<int>q;
	for(int i=0;i<n;i++){int x;cin >> x;q.push(x);}
	int x=1;
	stack<int>s;
	while(!q.empty()){
	if(x==q.front()){q.pop();x++;}
    else {if( !s.empty()&&x==s.top()){
     s.pop();x++;
    }
    else{int y=q.front();s.push(y);q.pop();}
    }}
    while(x<=n&& !s.empty()){
    if(x!=s.top()){break;}
    else{s.pop();x++;}
    }
    if(x==n)cout << "YES" << endl;
    else cout << "NO" << endl;
    cin >> n;
	}
    }
