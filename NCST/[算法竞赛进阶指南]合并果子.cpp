//http://182.92.86.249/problem.php?pid=1547
#include<bits/stdc++.h>
#include<queue>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	scanf("%lld",&n);
	priority_queue<ll,vector<ll>,greater<ll> > q;
	for(ll i=0;i<n;i++){
		ll a;
		scanf("%lld",&a);
		q.push(a);
	}
	ll sum = 0;
	while(q.size()>1){
		ll a = q.top();
		q.pop();
		ll b = q.top();
		q.pop();
		ll num = a+b;
		sum+=num;
		q.push(num);
	}
	printf("%lld",sum);
	return 0;
}
