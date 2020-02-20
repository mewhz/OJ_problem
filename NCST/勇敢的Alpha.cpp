//http://182.92.86.249/problem.php?pid=1426
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=s.length()-1;i>=0;i--){
		putchar(s[i]);
	}
	return 0;
}
