//https://pintia.cn/problem-sets/994805046380707840/problems/1386335159927652358
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int a[N];
int Min = N;
int Max = 0;
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i ++){
		int s;
		cin >> s;
		if (s < Min)	Min = s;
		if (s > Max)	Max = s;
		a[s] ++;
	}
	cout << Min << " " << a[Min] << endl;
	cout << Max << " " << a[Max] << endl;
}
