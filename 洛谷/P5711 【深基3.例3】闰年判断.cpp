//https://www.luogu.com.cn/problem/P5711
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if((n%4==0&&n%100!=0)||(n%400==0)){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0;
}
