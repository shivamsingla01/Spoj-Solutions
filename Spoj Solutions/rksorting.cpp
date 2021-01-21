#include<bits/stdc++.h>
using namespace std;
map<int,pair<int,int>>m;
bool sortby(pair<int,int>a,pair<int,int>b){
	if(a.second==b.second)return m[a.first].second<m[b.first].second;
    return a.second > b.second;
}
int main(){
	vector<pair<int,int> >v;
    int x,y;
    cin >> x >> y;
    for(int i=0;i<x;i++){
    int z;
    cin >> z;
    if(m[z].first==0)m[z].second=i;
    m[z].first+=1;
    }
    map<int,pair<int,int> > :: iterator it;
    for(it=m.begin();it!=m.end();++it){
    v.push_back(make_pair(it->first,it->second.first));
    }
    sort(v.begin(),v.end(),sortby);
    vector<pair<int,int>> :: iterator itr;
    for(itr=v.begin();itr!=v.end();itr++){
    for(int j=0;j<itr->second;j++){
    cout << itr->first << " ";
    }
    }
}
