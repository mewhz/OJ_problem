//http://182.92.86.249/problem.php?pid=1463
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[105];
	scanf("%s",a);
	bool flag = false;
	int len = 0;
	int LEN = 0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]<='Z'&&a[i]>='A'){
			LEN++; 
		}
		else	if(a[i]<='z'&&a[i]>='a'){
			len++;
		}
	}
	if(len==strlen(a)||LEN==strlen(a)||(len==strlen(a)-1)&&(a[0]<='Z'&&a[0]>='A')){
		flag = true;
	}
	if(flag){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
	return 0;
}
