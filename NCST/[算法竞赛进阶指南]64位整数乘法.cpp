//http://182.92.86.249/problem.php?pid=1378
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	ll ans = 0;
	while(b){
		if(b&1){
			ans = (ans+a)%c;
		}
		a = (a*2)%c;
		b>>=1;
	}
	printf("%lld",ans);
	return 0;
} 
