//http://182.92.86.249/problem.php?pid=1348
#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[] = "`1234567890-=QWERTYUIOP{}\\ASDFGHJKL;'ZXCVBNM,./";
	int i;
	char c;
	while((c = getchar())!=EOF){
		for(i=1;s[i]&&s[i]!=c;i++);
		if(s[i])	putchar(s[i-1]);
		else	putchar(c);
	}
	return 0;
}
