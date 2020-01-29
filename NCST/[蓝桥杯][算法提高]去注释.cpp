//http://182.92.86.249/problem.php?pid=1200
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int main(){
	char a[N+5];
	int i = 0;
	char c;
	while((c = getchar())!=EOF){
		a[i] = c;
		i++;
	}
	a[i] = '\0';
	int flag = 0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='/'&&a[i+1]=='*'){
			flag = 1;
		}
		else	if(a[i]=='*'&&a[i+1]=='/'&&flag==1){
			flag = 0;
			i++;
		}
		else	if(a[i]=='/'&&a[i+1]=='/'&&flag==0){
			flag = 2;
		}
		else	if(flag==2&&a[i]=='\n'){
			flag = 0;
			printf("\n");
		}
		else	if(flag==0){
			printf("%c",a[i]);
		}
	}
	return 0;
}
