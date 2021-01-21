#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while(1){
	cin >> s;
	if(s[0]==0)break;
	int prev=1,cur=0;int a;
	for(int i=1;i<s.size();i++){
    a=(s[i-1]-'0')*10 + s[i]-'0';
    cur=prev+1;
    if(a<27)cur++;
    swap(cur,prev);
	}
	cout<< prev << endl;
	}
}