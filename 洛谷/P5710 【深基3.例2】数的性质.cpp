//https://www.luogu.com.cn/problem/P5710
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int flag = 0;
	if(n%2==0){
		flag++;
	}
	if(n>4&&n<=12){
		flag++;
	}
	int a[4]={0};
	switch(flag){
		case 2:a[0]=1,a[1]=1,a[2]=0,a[3]=0;break;
		case 1:a[1]=1,a[2]=1,a[0]=0,a[3]=0;break;
		case 0:a[0]=0,a[1]=0,a[2]=0,a[3]=1;break;
	} 
	for(int i=0;i<4;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
