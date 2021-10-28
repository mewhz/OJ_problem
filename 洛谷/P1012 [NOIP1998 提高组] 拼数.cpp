//https://www.luogu.com.cn/problem/P1012
#include <bits/stdc++.h>
using namespace std;
bool cmp(string x, string y){
	int len = x.length() < y.length() ? x.length() : y.length();
	for (int i = 0; i < len; i++){
		if (x[i] != y[i])	return x[i] < y[i];
	}
	return len == x.length() ? x[0] < y[y.length() - 1] : y[0] < x[x.length() - 1];
}
int main(){
	int n;
	cin >> n;
	string str[n];
	for (int i = 0; i < n; i++)	cin >> str[i];
	sort(str, str + n, cmp);
	for (int i = n - 1; i >= 0; i--)	cout << str[i];
	return 0;
}
