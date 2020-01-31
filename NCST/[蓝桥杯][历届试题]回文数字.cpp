//http://182.92.86.249/problem.php?pid=1118
#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	scanf("%d",&m);
	bool flag = true; 
	for(int i=10000;i<=99999;i++){
		char a[10];
		sprintf(a,"%d",i);
		if(a[0]==a[4]&&a[1]==a[3]){
			if(a[0]+a[1]+a[2]+a[3]+a[4]-5*'0'==m){
				printf("%d\n",i);
				flag = false;
			}
		}
	}
	for(int i=100000;i<=999999;i++){
		char a[10];
		sprintf(a,"%d",i);
		if(a[0]==a[5]&&a[1]==a[4]&&a[2]==a[3]){
			if(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]-6*'0'==m){
				printf("%d\n",i);
				flag = false;
			}
		}
	}
	if(flag){
		printf("-1");
	}
	return 0;
}
