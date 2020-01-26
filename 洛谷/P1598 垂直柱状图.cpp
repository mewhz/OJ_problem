//https://www.luogu.com.cn/problem/P1598
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[26]={0};
	for(int i=0;i<4;i++){
		char s[105];
		gets(s);
		for(int i=0;i<strlen(s);i++){
			a[s[i]-'A']++;
		}
	}
	int sum = 0;
	for(int i=0;i<26;i++){
		if(sum<a[i]){
			sum = a[i];
		}
	}
	int SUM = sum;
	for(int i=0;i<sum;i++){
		for(int j=0;j<26;j++){
			if(a[j]>=SUM){
				printf("*");
			}
			else
				printf(" ");
			if(j!=25){
				printf(" ");
			}
		}
		SUM--;
		printf("\n");
	}
	char s = 'A';
	for(int i=0;i<26;i++){
		printf("%c",s);
		s++;
		if(i!=25){
			printf(" ");
		}
	}
	return 0;
}
