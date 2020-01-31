//http://182.92.86.249/problem.php?pid=1377
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll pow(ll a,ll b,ll c){
	ll ans = 1,base = a;//ans是结果,base是底数a
	base %=c;
	if(b==0){
		return 1%c;
	}
	while(b){
		if(b&1){
			ans = (ans*base)%c;
		}
		base = (base*base)%c;
		b>>=1;
	}
	return ans;
}
int main(){
	ll a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	printf("%lld\n",pow(a,b,c));
	return 0;
} 
