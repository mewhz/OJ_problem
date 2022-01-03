//https://pintia.cn/problem-sets/994805046380707840/problems/1336215880692482053
#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	int i = 0, flag = -1, n = 0;
	while (getline(cin, str)){
		if (str == ".")	break;
		i ++;
		if (str.find("chi1 huo3 guo1") != -1){
			if (flag == -1)	flag = i;
			n ++;
		}
	}
	cout << i << endl;
	if (flag == -1){
		cout << "-_-#";
	}
	else{
		cout << flag << " " << n << endl; 
	}
	return 0;
} 
