//http://182.92.86.249/problem.php?pid=1452
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	char a[1005];
	char b[1005];
	for(int i=0;i<n;i++){
		scanf("%s",a);
		scanf("%s",b);
		int count = 0;
		char *p = b;
		while(p = strstr(p,a)){
			count++;
//			printf("%s\n",p);
			p++;
		}
		printf("%d\n",count);
	}
	return 0;
} 
