//https://www.dotcpp.com/oj/problem1022.html
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	if(n>=2)
		cout<<2<<endl;
	for(int i=3; i<=n; i+=2) {
		int j;
		for(j=3; j<=sqrt(i); j+=2) {
			if(i%j==0) {
				break;
			}
		}
		if(j>sqrt(i)) {
			cout<<i<<endl;
		}
	}
	return 0;
}
