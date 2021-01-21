#include<bits/stdc++.h>
using namespace std;
int check(double x,int f,double arr[],int n){
	int i=0;
	while(f>0&&i<n){
	int z=arr[i]/x;
	f-=z;
	i++;
	}
	if(f>0)return 0;
	else return 1;
}
int main(){
	int t;
	double pi=acos(-1.0);
	cin >> t;
	while(t--){
	int n,f;
	cin >> n>> f;
	f++;
	double arr[n];
	for(int i=0;i<n;i++){cin >> arr[i];
		arr[i]*=pi*arr[i];
	 //cout << arr[i] << endl;
	 }
	sort(arr,arr+n);
	//cout << "After sort" << endl;
	double high=arr[n-1];
	double low=0;
	double v=0;
	double mid;
	while(high>low){
		if(mid == (high+low)/2)break;
	mid=(high+low)/2;
	//cout << mid << endl;
    if(check(mid,f,arr,n)){
    v=mid;
    low=mid;
    }
    else
    high=mid;
	}

    cout << fixed << setprecision(4) << v << endl;
	}
}