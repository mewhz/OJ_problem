//http://182.92.86.249/problem.php?pid=1313
#include<bits/stdc++.h>
using namespace std;
typedef struct{
	char name[25];
	char num[15];
	char sex;
}Edu;
int main(){
	int n;
	scanf("%d",&n);
	Edu s[n];
	for(int i=0;i<n;i++){
		cin>>s[i].name>>s[i].num>>s[i].sex;
	}
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		char a[30];
		char b[30];
		cin>>a>>b;
		char x,y;
		if(a[0]<='9'&&a[0]>='0'){
			for(int j=0;j<n;j++){
				if(strcmp(s[j].num,a)==0){
					x = s[j].sex;
					break;
				}
			}
		}
		else{
			for(int j=0;j<n;j++){
				if(strcmp(s[j].name,a)==0){
					x = s[j].sex;
					break;
				}
			}
		}
		if(b[0]<='9'&&b[0]>='0'){
			for(int j=0;j<n;j++){
				if(strcmp(s[j].num,b)==0){
					y = s[j].sex;
					break;
				}
			}
		}
		else{
			for(int j=0;j<n;j++){
				if(strcmp(s[j].name,b)==0){
					y = s[j].sex;
					break;
				}
			}
		}
		if(x!=y){
			printf("Y\n");
		} 
		else{
			printf("N\n");
		}
	}
	return 0;
}
