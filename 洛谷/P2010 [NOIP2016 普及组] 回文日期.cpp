//https://www.luogu.com.cn/problem/P2010
#include <bits/stdc++.h>
using namespace std;
bool isDate(char date[]) {
	int year = 0, month = 0, day = 0;
	int a[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
	int b[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	for (int i = 0; i < 4; i++) {
		year *= 10;
		year += date[i] - '0';
	}
	for (int i = 4; i < 6; i++) {
		month *= 10;
		month += date[i] - '0';
	}
	for (int i = 6; i < 8; i++) {
		day *= 10;
		day += date[i] - '0';
	}
	if (month == 0 || day == 0)	return false;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		if (day > a[month])	return false;
	} else {
		if (day > b[month])	return false;
	}
	return true;
}
bool fun(char date[]) {
	for (int i = 0,j = 7; i < 4; i++, j--) {
		if (date[i] != date[j])	return false;
	}
	return true;
}
int main() {
	int start,end;
	cin >> start >> end;
	int num = 0;
	FILE *fp = fopen("D://a.txt", "a");
	for (int i = start; i <= end; i++) {
		char date[10];
		sprintf(date, "%d", i);
		int month = 0;
		for (int j = 4; j < 6; j++) {
			month *= 10;
			month += date[j] - '0';
		}
		if (month > 12)	{
			i += 8799;
			continue;
		}
		int day = 0;
		for (int j = 6; j < 8; j++) {
			day *= 10;
			day += date[j] - '0';
		}
		if (day > 31) {
			i += 68;
			continue;
		}
		if (isDate(date)) {
			if (fun(date)) {
				num++;
			}
		}
	}
	cout << num;
	return 0;
}
