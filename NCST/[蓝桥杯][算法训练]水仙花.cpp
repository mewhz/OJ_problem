//http://182.92.86.249/problem.php?pid=1306
#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	scanf("%d",&num);
	int k = num;
	int a = num/100;
	int b = num%100/10;
	int c = num%100%10;
	if(a*a*a+b*b*b+c*c*c==num){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
