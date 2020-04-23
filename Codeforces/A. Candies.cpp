//https://codeforces.com/contest/1343/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		ll n;
		scanf("%lld",&n);
		for(int i=1;i<30;i++){
			ll num = (2<<i)-1;
			if(n%num==0){
				printf("%lld\n",n/num);
				break;
 			}
		}
	}
	return 0;
}
