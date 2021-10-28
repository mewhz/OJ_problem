//https://www.luogu.com.cn/problem/P1003
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
int a[N],b[N],g[N],k[N];
int n,x , y;
int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d%d%d%d", &a[i], &b[i], &g[i], &k[i]);
	scanf("%d%d", &x, &y);
	for (int i = n - 1; i >= 0; i--){
		int x1 = a[i];
		int y1 = b[i];
		int x2 = a[i] + g[i];
		int y2 = b[i] + k[i];
		if (x >= x1 && x <= x2){
			if (y >= y1 && y <= y2){
				printf("%d", i + 1);
				return 0;
			}
		}
	}
	printf("-1");
	return 0;
} 
