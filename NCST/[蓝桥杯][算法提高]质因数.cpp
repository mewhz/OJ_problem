//http://182.92.86.249/problem.php?pid=1242
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int Prime[N+5];
bool isPrime[N+5];
int cnt = 0;
void GetPrime(int n) {
	memset(isPrime,1,sizeof(isPrime));
	isPrime[1] = 0;
	for(int i=2; i<=n; i++) {
		if(isPrime[i]) {
			Prime[++cnt] = i;
		}
		for(int j=1; j<=cnt&&i*Prime[j]<=n; j++) {
			isPrime[i*Prime[j]] = 0;
			if(i%Prime[j]==0)	break;
		}
	}
}
int main() {
	int n;
	scanf("%d",&n);
	GetPrime(n);
	int j = 1;
	int a[105];
	int k = 0;
	int sum = 1;
	int num = n;
	while(1) {
		if(num%Prime[j]==0) {
			sum*=Prime[j];
			num/=Prime[j];
			a[k] = Prime[j];
			k++;
		} else {
			j++;
		}
		if(sum>n||Prime[j]>n) {
			break;
		}
		if(sum==n) {
			printf("%d=",n);
			printf("%d",a[0]);
			for(int u=1; u<k; u++) {
				printf("*%d",a[u]);
			}
			printf("\n");
			break;
		}
	}
	return 0;
}
