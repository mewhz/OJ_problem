//https://www.luogu.org/problem/P5534
#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a,b,n;
	cin>>a>>b>>n;
	int d = b - a;
	long long sum = 0;
	long long c = a;
	for(int i=0;i<n;i++){
		sum+=c;
		c+=d;
	}
	cout<<sum<<endl;
	return 0;
} 
