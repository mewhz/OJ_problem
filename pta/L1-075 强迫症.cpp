//https://pintia.cn/problem-sets/994805046380707840/problems/1386335159927652354D
#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	if (str.length() == 6)	{
		for (int i = 0; i < 4; i ++)	cout << str[i];
		cout << "-";
		for (int i = 4; i < 6; i ++)	cout << str[i];
	}
	else{
		int year = str[1] - '0' + (str[0] - '0') * 10;
		if (year < 22) year = 20;
		else	year = 19;
		cout << year;
		for (int i = 0; i < 2; i ++){
			cout << str[i];
		}
		cout << "-";
		for (int i = 2; i < 4; i ++)	cout << str[i];
	}
	return 0;
} 
