//http://182.92.86.249/problem.php?pid=1280
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long num = 1;
	char s[40];
	long long n = 2;
	scanf("%s",s);
	if(s[0]=='0'&&strlen(s)==1){
		cout<<"0";
		return 0;
	}
	for(int i=strlen(s)-2;i>=0;i--){
		if(s[i]=='1'){
			num+=n;
		}
		n*=2;
	}
	cout<<num;
	return 0;
}
