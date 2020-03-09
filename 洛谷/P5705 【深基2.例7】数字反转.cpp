//https://www.luogu.com.cn/problem/P5705
#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[1005];
	scanf("%s",s);
	for(int i = strlen(s)-1;i>=0;i--)	printf("%c",s[i]);
	return 0; 
}
