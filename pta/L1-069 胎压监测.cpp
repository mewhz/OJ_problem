//https://pintia.cn/problem-sets/994805046380707840/problems/1336215880692482052
#include <bits/stdc++.h>
using namespace std;
int a[4], maxs, num, n, m;
int main(){
	for (int i = 0; i < 4; i++)	{
		cin >> a[i];
		if (a[i] > maxs)	maxs = a[i]; 
	}
	cin >> num;
	cin >> n;
	int flag = 0;
	for (int i = 0; i < 4; i++){
		if (a[i] < num || (maxs - a[i]) > n)	{
			flag ++;
			m = i + 1; 
		}
	}
	if (flag == 0)	printf("Normal");
	else	if (flag == 1)	printf("Warning: please check #%d!", m);
	else	printf("Warning: please check all the tires!");
	return 0;
} 
