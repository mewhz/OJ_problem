//http://182.92.86.249/problem.php?pid=1466
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	if(n<0){
		printf("no");
		return 0;
	}
	char s[10];
	sprintf(s,"%d",n);
	int l = strlen(s);
	for(int i=0,j=strlen(s)-1;i<=l/2;i++,j--){
		if(s[j]==s[i]){
			continue;
		}
		printf("no");
		return 0;
	}
	printf("yes");
	return 0;
}
