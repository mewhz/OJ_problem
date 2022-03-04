//https://pintia.cn/problem-sets/994805046380707840/problems/1386335159927652355
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i ++){
		double a;
		cin >> a;
		if (a < m){
			printf("On Sale! %.1lf\n", a);
		}
	}
	return 0;
}
