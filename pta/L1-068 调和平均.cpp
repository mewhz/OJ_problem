//https://pintia.cn/problem-sets/994805046380707840/problems/1336215880692482051
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	double sum = 0;
	for (int i = 0; i < n; i++){
		double e;
		cin >> e;
		sum += 1 / e;
	}
	sum /= n;
	printf("%.2lf", 1 / sum);
	return 0;
} 
