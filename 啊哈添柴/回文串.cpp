//https://www.acoj.com/problems/12013
#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[105];
	gets(s);
	stack<char> head;
	stack<char> read;
	for(int i=0,j=strlen(s)-1;i<strlen(s);i++,j--){
		head.push(s[i]);//��Ԫ�ط���ջ�� 
		read.push(s[j]);
	}
	int flag = 1;
	for(int i=0;i<strlen(s)/2;i++){
		char h = head.top();//���ջ��Ԫ�� 
		char r = read.top();
		head.pop();//ɾ��ջ��Ԫ�� 
		read.pop();
		if(h==r){
			flag = 1;
		}
		else{
			flag = 0;
			break;
		}
	}
	if(flag==1){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
