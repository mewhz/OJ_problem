//https://pintia.cn/problem-sets/994805046380707840/problems/994805058485469184
#include <bits/stdc++.h> 
using namespace std;
typedef struct {
	string name;
	int len;
	int sum;
}User;
User user[105];
bool cmp(User x, User y){
	if (x.sum != y.sum)	return x.sum > y.sum;
	else	return (x.len * 1.0 / x.sum) < (y.len * 1.0 / y.sum);
}
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i ++){
		set<int> s;
		int m;
		cin >> user[i].name >> user[i].len;
		for (int j = 0; j < user[i].len; j ++){
			int a;
			cin >> a;
			s.insert(a);
		}
		user[i].sum = s.size();
	}
	sort(user, user + n, cmp);
	if (n > 3)	n = 3;
	for (int i = 0; i < n; i ++){
		cout << user[i].name;
		if (i != n - 1)	cout << " ";
	} 
	for (int i = 0; i < 3 - n; i ++){
		cout << " -";
	}
	return 0;
}
