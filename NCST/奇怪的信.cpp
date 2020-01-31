//http://182.92.86.249/problem.php?pid=1595
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[20];
	scanf("%s",a);
	int sum = 0;
	for(int i=0;i<strlen(a);i++){
		int num = a[i]-'0';
		if(num%2==0){
			sum+=num;
		}
	}
	cout<<sum;
	return 0;
} 
