//http://182.92.86.249/problem.php?pid=1469
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[1005];
	gets(a);
	char *p;
	p = strtok(a," ");
	while(p){
		for(int i=strlen(p)-1;i>=0;i--){
			printf("%c",p[i]);
		}
		printf(" ");
		p = strtok(NULL," ");
	}
	return 0;
} 
