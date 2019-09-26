//https://www.luogu.org/problem/P1200
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[20];
	char b[20];
	scanf("%s",a);
	scanf("%s",b);
	long long n = 1,m = 1;
	for(int i=0;i<strlen(a);i++)
		n *=a[i] - 64;
	for(int i=0;i<strlen(b);i++)
		m *=b[i] - 64;
	if((n%47)==(m%47)){
		cout<<"GO";
	}
	else{
		cout<<"STAY";
	}
	return 0;
} 
