//http://182.92.86.249/problem.php?pid=1465
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[20],b[20];
	cin>>a>>b;
	int A = 0, B = 0;
	int num = 1;
	for(int i = strlen(a)-1;i>=0;i--){
		A = A+(a[i]-'0')*num;
		num*=2;
	}
	num = 1;
	for(int i = strlen(b)-1;i>=0;i--){
		B = B+(b[i]-'0')*num;
		num*=2;
	}
	int sum = A+B;
	int s[200];
	int i = 0;
	while(sum){
		s[i] = sum&1;
		sum>>=1;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		cout<<s[j];
	}
	if(A==0&&B==0){
		cout<<0;
	}
	return 0;
}
