//http://182.92.86.249/problem.php?pid=1252
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[1005];
	gets(a);
	bool flag = false;
	int num = 0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
			flag = true;
			num = i+1;
			break;
		}
	}
	if(!flag){
		printf("0");
	}
	else{
		printf("%d",num);
	}
	return 0;
}
