//https://www.luogu.com.cn/problem/P1307
#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	int begin = 0, end = str.length() - 1;
	if (str[0] == '-')	{
		cout << "-";
		begin++;
	}
	if (str.length() == 1 && str[0] == '0'){
		cout << "0";
		return 0;
	}
	while(str[end] == '0')	end--;
	for (int i = end; i >= begin; i--)	cout << str[i];
	return 0;
} 
