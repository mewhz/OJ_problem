//https://www.dotcpp.com/oj/problem1184.html
#include<bits/stdc++.h>
using namespace std;
int main() {
	map<int,int> m;
		int t;
		scanf("%d",&t);
		for(int j=0; j<t; j++) {
			int a;
			scanf("%d",&a);
			m[a]++;
		}
		int ans  = -1;
		int id;
		map<int,int>::iterator it;
		for(it = m.begin(); it!=m.end(); it++) {
			if(it->second>ans) {
				ans = it->second;
				id  = it->first;
			}
		}
	printf("%d\n%d",id,ans);
	return 0;
}
