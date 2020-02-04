//http://182.92.86.249/problem.php?pid=1574
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		char s[1000];
		gets(s);
		char *p = strtok(s," ");
		string str;
		while(p){
			if(p[0]<='z'&&p[0]>='a'){
				str+=p[0]-32;
			}
			else{
				str+=p[0];
			}
			p = strtok(NULL," ");
		}
		cout<<str<<endl;
	}
	return 0;
} 
