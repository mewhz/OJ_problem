//https://pintia.cn/problem-sets/994805046380707840/problems/1336215880692482050
#include <bits/stdc++.h>
using namespace std;
int main(){
	double a, b;
	int f;
	cin >> a >> f >> b;
	if (f == 0){
		a *= 2.455;
	}
	else{
		a *= 1.26;
	}
	printf("%.2lf ", a);
	if (a < b)	printf("^_^");
	else	printf("T_T");
	return 0;
} 
