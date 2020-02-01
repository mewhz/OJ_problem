//http://182.92.86.249/problem.php?pid=1245
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[100],b[100];
	scanf("%s",a);
	scanf("%s",b);
	if(strcmp(a,b)<0){
		cout<<-1;
	}
	else	if(strcmp(a,b)>0){
		cout<<1;
	}
	else{
		cout<<0;
	}
	return 0;
}
