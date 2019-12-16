//https://codeforces.com/problemset/problem/1272/A 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		ll a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		ll ay[3] = {a+1,a-1,a};
		ll by[3] = {b+1,b-1,b};
		ll cy[3] = {c+1,c-1,c};
		ll sum,j=0,min;
		for(int x = 0; x<3; x++) {
			for(int y = 0; y<3; y++) {
				for(int z = 0; z<3; z++) {
					sum = abs(ay[x]-by[y])+abs(ay[x]-cy[z])+abs(by[y]-cy[z]);
					if(j==0) {
						min = sum;
						j++;
					} else {
						if(sum<min) {
							min = sum;
						}
					}
					if(min==0) {
						goto A;
					}
				}
			}
		}
A:
		printf("%lld\n",min);
	}
}
