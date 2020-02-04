//http://182.92.86.249/problem.php?pid=1295
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int main(){
	char s[N+5];
	scanf("%s",s);
	int len = 0;
	int i;
	for(i=0;i<strlen(s);i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'){
			len = i+1;
			break;
		}
	}
	if(i==strlen(s)){
		printf("0");
	}
	else{
		printf("%d",len);
	}
	return 0;
} 
