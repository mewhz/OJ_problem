//http://182.92.86.249/problem.php?pid=1363
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		char s[20];
		sprintf(s,"%d",a);
		int flag = 0;
		for(int j=1;j<strlen(s);j++){
			if(s[j]!='0'||flag==1){
				flag = 1;
				putchar(s[j]); 
			}
			if(s[j]==0&&flag==0){
				continue;
			}
		}
		if(flag==0){
			putchar('0');
		}
		printf("\n");
	}
	return 0;
}
