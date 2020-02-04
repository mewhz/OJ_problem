//https://ac.nowcoder.com/acm/contest/3002/B
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,a,b;
	cin>>n>>x>>a>>b;
	double sum = 0;
	double x1 = x*1.0/100;
	double x2 = 1 - x1;
	double A;
	double B;
	A = a*n;
	B = b*n;
	sum = A*x1+B*x2;
	printf("%.2lf",sum);
	return 0;	
} 
