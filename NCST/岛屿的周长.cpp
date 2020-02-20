//http://182.92.86.249/problem.php?pid=1479
#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int sum = 0;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			scanf("%d",&a[i][j]);
			if(a[i][j]==1) {
				sum++;
			}
		}
	}
	sum*=4;
	int count = 0;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if(a[i][j]==1) {
				if(a[i-1][j]==1)	count++;
				if(a[i+1][j]==1)	count++;
				if(a[i][j-1]==1)	count++;
				if(a[i][j+1]==1)	count++;
			}
		}
	}
	printf("%d",sum-count);
	return 0;
}
