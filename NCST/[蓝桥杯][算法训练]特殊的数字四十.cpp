//http://182.92.86.249/problem.php?pid=1307
#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int i=1000;i<=9999;i++){
		char a[20];
		sprintf(a,"%d",i);
		if(a[0]-'0'+a[1]-'0'+a[2]-'0'+a[3]-'0'==10){
			printf("%d\n",i);
		}
	}
	return 0;
}
