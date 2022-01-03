// https://pintia.cn/problem-sets/994805046380707840/problems/1336215880692482054
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	while (m --){
		int num = 0;
		for (int i = 0; i < n; i ++){
			char ch;
			cin >> ch;
			num *= 2;
			if (ch == 'n')	num ++; 
		}
		num ++;
		cout << num << endl;
	}
	return 0;
}
