//https://ac.nowcoder.com/acm/contest/903/B 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll q,n,p;
ll pow(ll a,ll b,ll c){
	ll ans = 1,base = a;
	base = base%c;
	if(b==0){
		return 1%c;
	}
	while(b){
		if(b&1)
			ans = (ans*base)%c;
		b = b>>1;
		base = (base*base)%c;
	}
	return ans;
}
ll dengb(ll n){
	if(n==1){
		return q%p;
	}
	if(n%2==0){
		return (dengb(n/2)+(dengb(n/2)*pow(q,n/2,p))%p)%p;
	}
	else{
		return ((dengb(n/2)+(dengb(n/2)*pow(q,n/2,p))%p)%p+pow(q,n,p))%p;
	}
}
int main(){
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%lld%lld%lld",&q,&n,&p);
		printf("%lld\n",dengb(n));
	}
	return 0;
}
