//https://pintia.cn/problem-sets/994805260223102976/problems/994805301562163200
#include<bits/stdc++.h>
using namespace std;
typedef struct {
	double a,b,c;
} money;
bool cmp(money A,money B) {
	return A.c>B.c;
}
int main() {
	int n,N;
	scanf("%d%d",&n,&N);
	vector<money> A(n);
	for(int i=0; i<n; i++) {
		scanf("%lf",&A[i].a);
	}
	for(int i=0; i<n; i++) {
		scanf("%lf",&A[i].b);
	}
	for(int i=0; i<n; i++) {
		A[i].c = A[i].b/A[i].a;
	}
	sort(A.begin(),A.end(),cmp);
	double sum = 0;
	for(int i=0; i<n; i++) {
		if(N<=0) {
			break;
		}
		if(N>=A[i].a) {
			sum = A[i].b + sum;
			N = N - A[i].a;
		} else {
			sum = A[i].c*N + sum;
			N = N - A[i].a;
		}
	}
	printf("%.2lf",sum);
	return 0;
}
