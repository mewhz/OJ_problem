//http://182.92.86.249/problem.php?pid=1347
#include<bits/stdc++.h>
using namespace std;
int main(){
	char c;
	int flag = 0;
	int len = 0;
	while((c = getchar())!='\n'){
		if(c=='\"'){
			len++;
		}
		else{
			putchar(c);
		}
		if(len==1&&!flag){
			printf("``");
			len = 0;
			flag = !flag;
		}
		else	if(len==1&&flag){
			printf("''");
			len = 0;
			flag = !flag;
		}
	}
	return 0;
}
