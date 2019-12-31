//https://www.acwing.com/problem/content/877/
#include<bits/stdc++.h>
using namespace std;
long long pow(long long a,long long b,long long c){
	long long ans = 1,base = a;
	base = base % c;
	while(b){
		if(b&1){
			ans = (ans*base)%c;
		}
		b>>=1;
		base = (base*base)%c;
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		long long a,b,c;
		cin>>a>>b>>c;
		cout<<pow(a,b,c)<<endl;
	}
	return 0;
}
