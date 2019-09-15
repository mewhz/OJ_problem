//https://pintia.cn/problem-sets/994805260223102976/problems/994805264706813952
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[10005];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int sum = (a[0]+a[1])/2;
	for(int i=2;i<n;i++){
		sum = (a[i]+sum)/2;
	}
	cout<<sum;
	return 0;
}
