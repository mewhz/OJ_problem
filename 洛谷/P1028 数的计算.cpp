//https://www.luogu.com.cn/problem/P1028
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a[1005];
	scanf("%d",&n);
	a[0] = 1;
	a[1] = 1;
	for(int i=2;i<=n;i++){
		if(i%2==0)	a[i] = a[i-1]+a[i/2];
		else	a[i] = a[i-1];
	}
	printf("%d",a[n]);
	return 0;
}
