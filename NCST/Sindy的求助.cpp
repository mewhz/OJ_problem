//http://182.92.86.249/problem.php?pid=1429
#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[10];
	cin>>s;
	int sum = 0;
	for(int i=0;i<strlen(s);i++){
		sum+=s[i]-'0';
	}
	cout<<sum;
	return 0;
}
