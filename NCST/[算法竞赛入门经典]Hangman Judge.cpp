//http://182.92.86.249/problem.php?pid=1355
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	char num;
	while(scanf("%d",&n)&&n!=-1){
		getchar();
		char a[1005];
		char b[1005];
		gets(a);
		gets(b);
		int s[300]={0};
		int sum = 0;
		for(int i=0;i<strlen(a);i++){
			if(s[a[i]]==0){
				s[a[i]] = 1;
				sum++;
			}
		}
		int NO = 0;
		for(int i=0;i<strlen(b);i++){
			if(s[b[i]]==1){
				sum--;
				s[b[i]] = 0;
			}
			else{
				NO++;
				if(NO==7){
					break;
				}
			}
		}
		printf("Round %d\n",n);
		if(sum==0&&NO<=7){
			printf("You win.\n");
		}
		else	if(NO<7&&sum>0){
			printf("You chickened out.\n");
		}
		else	if(NO==7&&sum>0){
			printf("You lose.\n");
		}
	}
	return 0;
} 
