//https://pintia.cn/problem-sets/994805046380707840/problems/1386335159927652356
#include <bits/stdc++.h>
using namespace std;
int a[24];
int main(){
	for (int i = 0; i < 24; i ++)	cin >> a[i];
	int s;
	while (cin >> s){
		if (s < 0 || s >= 24)	break;
		if (a[s] > 50)	cout << a[s] << " Yes" << endl;
		else cout << a[s] << " No" << endl;
	}
	return 0;
}
