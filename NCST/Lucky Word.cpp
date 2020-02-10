//http://182.92.86.249/problem.php?pid=1414
#include<bits/stdc++.h>
using namespace std;
bool isPrime[105];
int Prime[105];
int cnt = 0;
void GetPrime(int n){
	memset(isPrime,1,sizeof(isPrime));
	isPrime[1] = 0;
	isPrime[0] = 0;
	for(int i=2;i<n;i++){
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
	int n;
	scanf("%d",&n);
	getchar();
	GetPrime(101);
	for(int i=0;i<n;i++){
		int a[30]={0};
		char s[105];
		int len = 0;
		gets(s);
		int max = 0;
		int min = 101;
		for(int j=0;j<strlen(s);j++){
			a[s[j]-'a']++;
			if(a[s[j]-'a']>max){
				max = a[s[j]-'a'];
			}
			if(a[j]<min){
				min = a[s[j]-'a'];
			}
		}
		if(isPrime[max-min]){
			printf("Lucky Word\n%d\n",max-min);
		}
		else{
			printf("No Answer\n0\n");
		}
	}
	return 0;
}
