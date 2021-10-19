//https://www.luogu.com.cn/problem/P5015
#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	int len = 0;
	for (int i = 0; i < s.length(); i++)	if (s[i] != ' ')	len++;
	cout << len;
	return 0;
}
