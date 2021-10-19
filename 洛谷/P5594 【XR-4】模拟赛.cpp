//https://www.luogu.com.cn/problem/P5594
#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int n,m,k;
bool flag[1005];
int answer[1005];
int main(){
	scanf("%d%d%d",&n,&m,&k);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++)	scanf("%d", &a[i][j]);
	}
	for (int i = 1; i <= m; i++){
		memset(flag, 0, sizeof(bool) * (k + 1));
		for (int j = 1; j <= n; j++)	flag[a[j][i]] = 1;
		for (int j = 1; j <= k; j++)	if (flag[j])	answer[j]++;
	}
	for (int i = 1; i <= k; i++)	printf("%d ", answer[i]);
	return 0;
} 
