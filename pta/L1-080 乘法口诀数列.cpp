//https://pintia.cn/problem-sets/994805046380707840/problems/1386335159927652359
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
	int a1, a2, n;
	cin >> a1 >> a2 >> n;
	int i = 0;
	v.push_back(a1);
	v.push_back(a2);
	while (v.size() < n){
		a1 = v[i];
		a2 = v[i + 1];
		int sum = a1 * a2;
		char str[20];
		sprintf(str, "%d", sum);
		for (int j = 0; j < strlen(str); j ++){
			v.push_back(str[j] - '0');
		}
		i ++;
	}
	for (int i = 0; i < n; i ++){
		cout << v[i]; 
		if (i != n - 1)	cout << " ";
	}
	return 0;
} 
