//https://pintia.cn/problem-sets/994805046380707840/problems/1386335159927652357
#include <bits/stdc++.h> 
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	getchar();
	for (int i = 0; i < n; i ++){
		string str;
		getline(cin, str);
		if (str.find("qiandao") > str.length() && str.find("easy") > str.length()){
			m--;
			if (m < 0){
				cout << str << endl;
				return 0;
			}
		}
		
	}
	cout << "Wo AK le";
	return 0;
} 
