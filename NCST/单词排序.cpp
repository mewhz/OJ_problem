//http://182.92.86.249/problem.php?pid=1598
#include<bits/stdc++.h>
using namespace std;
char str[1005];
string s[25]; 
int main(){
	gets(str);
	char *p = strtok(str," ");
	int i = 0;
	while(p){
		string STR(&p[0],&p[strlen(p)]);
		s[i] = STR;
		p = strtok(NULL," ");
		i++;
	}
	sort(s,s+i);
	for(int j=0;j<=i;j++){
		cout<<s[j]<<" ";
	}
	return 0;
} 
