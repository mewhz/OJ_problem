//https://www.acwing.com/problem/content/870/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
bool isPrime[N+5];
int Prime[N+5];
int cnt = 0;
int len = 0;
void GetPrime(int n){
	memset(isPrime,1,sizeof(isPrime));
	isPrime[1] = 0;
	for(int i = 2;i<=n;i++){
		if(isPrime[i]){
			Prime[++cnt] = i;
			len++;
		}
		for(int j=1;j<=cnt&&i*Prime[j]<=n;j++){
			isPrime[i*Prime[j]] = 0;
			if(i%Prime[j]==0)	break;
		}
	}
}
int main(){
	int n;
	cin>>n;
	GetPrime(n);
	cout<<len<<endl;
	return 0;
}
