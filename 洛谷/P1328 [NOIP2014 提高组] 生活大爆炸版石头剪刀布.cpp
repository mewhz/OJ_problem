//https://www.luogu.com.cn/problem/P1328
#include <bits/stdc++.h>
using namespace std;
const int N = 205;
int score[5][5] = {{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};
int a,b,n;
int na[N],nb[N];
int main(){
	scanf("%d%d%d", &n,&a,&b);
	int A = 0, B = 0;
	for (int i = 0; i < a; i++)	scanf("%d", &na[i]);
	for (int i = 0; i < b; i++)	scanf("%d", &nb[i]);
	for (int i = 0; i < n; i++){
		A += score[na[i % a]][nb[i % b]];
		B += score[nb[i % b]][na[i % a]];
	}
	cout << A << " " << B;
	return 0;
}
