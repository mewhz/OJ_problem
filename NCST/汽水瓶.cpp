//http://182.92.86.249/problem.php?pid=1350
#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	while(cin>>num&&num){
		int sum = 0;
		if(num<2){
			printf("0\n");
			continue;
		}
		while(num>=2){
			if(num==2){
				num++;
			}
			int a = num/3;
			sum+=a;
			num%=3;
			num+=a;
		}
		printf("%d\n",sum);
	}
	return 0;
}
