//http://182.92.86.249/problem.php?pid=1488
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	char str[105];
	scanf("%s",str);
	int j = 0;
	int num[105];
	char s[105];
	int len = 0;
	for(int i=0;i<n;i++){
		if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
			s[j++] = str[i];
			num[len++] = i;
		}
	}
	int l  = 0;
	for(int i=0;i<n;i++){
		if(i==num[l]&&l<len){
			str[i] = s[--j];
			l++;
		}	
	}
	printf("%s",str);
	return 0;
}
