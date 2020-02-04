//https://ac.nowcoder.com/acm/contest/3002/D
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	long long sum = 0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	long long num = 0;
	for(int i=0;i<n-1;i++){
		int a;
		scanf("%d",&a);
		num+=a;
	}
	printf("%d",sum-num);
	return 0;
}
