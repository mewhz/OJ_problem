//http://182.92.86.249/problem.php?pid=1520
#include<bits/stdc++.h>
using namespace std;
const int N = 1e4;
char str[N+5];
int s[300];
int main(){
	gets(str);
	char c;
	while((c = getchar())!='\n'){
		s[c]++;
	}
	for(int i=0;i<strlen(str);i++){
		if(s[str[i]]==0){
			cout<<str[i];
		}
	}
	return 0;
}
