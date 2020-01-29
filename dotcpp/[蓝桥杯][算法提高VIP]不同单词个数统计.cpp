//https://www.dotcpp.com/oj/problem1487.html
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[105];
	gets(a);
	char *p;
	p = strtok(a," ");
	set<string> s;
	while(p){
		string k(&p[0],&p[strlen(p)]);
		s.insert(k);
		p = strtok(NULL," ");
	}
	cout<<s.size();
	return 0;
}
