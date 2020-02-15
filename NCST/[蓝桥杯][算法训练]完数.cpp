//http://182.92.86.249/problem.php?pid=1309
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	scanf("%lld",&n);
	ll num = 0;
	for(ll i=1;i<n;i++){
		if(n%i==0){
			num+=i; 
		}
	}
	if(num==n){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
