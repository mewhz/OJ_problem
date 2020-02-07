//http://182.92.86.249/problem.php?pid=1467
#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[10005];
	scanf("%s",s);
	stack<char> q;
	if(strlen(s)%2!=0){
		cout<<"false";
		return 0;
	}
	else{
		for(int i=0;i<strlen(s);i++){
			if(s[i]==')'){
				if(q.size()==0){
					cout<<"false";
					return 0;
				}
				char c = q.top();
				if(c=='('){
					q.pop();
				}
				else{
					cout<<"false";
					return 0;
				}
			}
			else	if(s[i]==']'){
				if(q.size()==0){
					cout<<"false";
					return 0;
				}
				char c = q.top();
				if(c=='['){
					q.pop();
				}
				else{
					cout<<"false";
					return 0;
				}
			}
			else	if(s[i]=='}'){
				if(q.size()==0){
					cout<<"false";
					return 0;
				}
				char c = q.top();
				if(c=='{'){
					q.pop();
				}
				else{
					cout<<"false";
					return 0;
				}
			}
			else{
				q.push(s[i]);
			}
		}
	}
	if(q.size()==0){
		cout<<"true";
	}
	return 0;
}
