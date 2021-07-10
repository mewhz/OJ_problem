//https://www.acwing.com/problem/content/3764/
#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;
int a[N + 5], r[N + 5];
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		int r[n];
		memset(a, 0, (n + 1) * 4);
		for (int i = 0; i < n; i ++){
			scanf("%d", &r[i]);
			a[r[i]]++;
		} 
		int res = -1;
		for (int i = 0; i < n; i ++){
			if (a[r[i]] == 1){
				if (res == -1 || r[res] > r[i])	res = i;
			}
		}
		if (res != -1)	res ++;
		printf("%d\n",res);
	}
	return 0;
} 
