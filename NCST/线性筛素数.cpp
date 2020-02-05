//http://182.92.86.249/problem.php?pid=1516
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7;
bool isPrime[N+5];
int Prime[N+5],cnt = 0;
void GetPrime(int n){
	memset(isPrime,1,sizeof(isPrime));
	isPrime[1] = 0;
	for(int i=2;i<=n;i++){
		if(isPrime[i]){
			Prime[++cnt] = i;
		}
		for(int j=1;j<=cnt&&i*Prime[j]<=n;j++){
			isPrime[i*Prime[j]] = 0;
			if(i%Prime[j]==0){
				break;
			}
		}
	}
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	GetPrime(n);
	for(int i=0;i<m;i++){
		int a;
		scanf("%d",&a);
		if(isPrime[a]){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	return 0;
}
