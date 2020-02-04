//http://182.92.86.249/problem.php?pid=1063
#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[105];
	gets(s);
	stack<char> head;
	stack<char> read;
	for(int i=0,j=strlen(s)-1;i<strlen(s);i++,j--){
		head.push(s[i]);
		read.push(s[j]);
	}
	int flag;
	for(int i=0;i<strlen(s)/2;i++){
		char a = head.top();
		char b = read.top();
		if(a==b){
			flag = 1;
		}
		else{
			flag = 0;
			break;
		}
		head.pop();
		read.pop();
	}
	if(flag==1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
