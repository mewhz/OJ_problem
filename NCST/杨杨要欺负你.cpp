//http://182.92.86.249/problem.php?pid=1457
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	scanf("%lld",&n);
	ll a[n];
	for(ll i = 0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	for(ll i=0;i<n;i+=2){
		printf("%lld ",a[i]);
	}
	for(ll i = n-1;i>=0;i-=2){
		printf("%lld ",a[i]);
	}
	return 0;
}
