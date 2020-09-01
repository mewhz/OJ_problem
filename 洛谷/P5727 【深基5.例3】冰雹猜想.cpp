//https://www.luogu.com.cn/problem/P5727
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
long long  a[N+5];
int main(){
	long long n;
	scanf("%lld",&n);
	a[0] = n;
	int len = 1;
	while(1){
		if(n==1){
			break;
		}
		if(n%2==0){
			n/=2;
			a[len++] = n;
		}
		else{
			n = n*3 + 1;
			a[len++] = n;
		}
	}
	for(int i=len-1;i>=0;i--){
		printf("%lld ",a[i]);
	}
	return 0;
}
