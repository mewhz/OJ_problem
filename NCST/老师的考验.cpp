//http://182.92.86.249/problem.php?pid=1443
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum = 1;
ll m = 1000003;
ll num = 1;
int main(){
	ll n;
	scanf("%lld",&n);
	for(int i=2;i<=n;i++){
		ll b = i;
		ll a = num;
		ll ans = 0;
		while(b){
			if(b&1){
				ans = (ans+a)%m;
			}
			a = (a*2)%m;
			b>>=1;
		}
		num = ans;
		sum+=ans;
	}
	printf("%lld",sum%m);
	return 0;
}
