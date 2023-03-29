//https://www.acwing.com/problem/content/description/792/
#include <bits/stdc++.h> 
using namespace std;
int main(){
	double n;
	scanf("%lf", &n);
	double l = 0, r = n;
	if (n < 0)	swap(l, r);
	if (n > -1 && n < 1){
		l = -1, r = 1;
	}
	while (r - l > 1e-9){
		double mid = (l + r) / 2;
		if (mid * mid * mid > n)	r = mid;
		else	l = mid;
	}
	printf("%.6lf", l);
	return 0;
}
