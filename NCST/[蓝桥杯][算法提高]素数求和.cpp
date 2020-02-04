//http://182.92.86.249/problem.php?pid=1216
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	long long sum = 0;
	if(n>=2){
		sum+=2;
	}
	for(int i=3;i<=n;i+=2){
		int q = sqrt(i);
		int j;
		for(j=3;j<=q;j+=2){
			if(i%j==0){
				break;
			}
		}
		if(j>q){
			sum+=i;
		}
	}
	printf("%lld",sum);
	return 0;
}
