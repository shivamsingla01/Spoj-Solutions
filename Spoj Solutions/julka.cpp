#include<bits/stdc++.h>
using namespace std;
string diff(string str1,string str2){
	int x=str1.size();int y=str2.size();
	string str3;int carry=0;
	reverse(str1.begin(),str1.end());
	reverse(str2.begin(),str2.end());
	for(int i=0;i<y;i++){
	int sub=(str1[i]-'0')-(str2[i]-'0')-carry;
	if(sub<0){
	sub+=10;
	carry=1;
	}
	else carry=0;
	str3.push_back(sub+'0');
	}
	for(int i=y;i<x;i++){
	int sub=(str1[i]-'0')-carry;
	if(sub<0){
	sub+=10;
	carry=1;}
	else carry=0;
	str3.push_back(sub+'0');
		}
  reverse(str3.begin(),str3.end());
  return str3;
}
string divide(string str3,int x){
	string ans;
	int k=0;
	int temp=str3[k]-'0';
	while(temp<x){
	temp=temp*10+(str3[++k]-'0');}
	while(k<str3.size()){
    ans.push_back((temp/x) + '0');
    temp=(temp%x)*10 + (str3[++k]-'0');
}
if(ans.size()==0)return "0";
return ans;
}

int main(){
for(int i=0;i<1;i++){
	string str1,str2;
	cin >> str1 >> str2;
	string str3=diff(str1,str2);
	string str4=divide(str3,2);
	
	string str5=diff(str1,str4);
	while(str5[0]=='0'){str5.erase(str5.begin());}
	cout << str5 << endl;
	cout << str4 << endl;

}


}