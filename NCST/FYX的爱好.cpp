//http://182.92.86.249/problem.php?pid=1382
#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[100];
	cin>>s;
	int a[300]={0};
	for(int i=0;i<strlen(s);i++){
		a[s[i]]++;
	}
	sort(a,a+300);
	cout<<a[299];
	return 0;
}
