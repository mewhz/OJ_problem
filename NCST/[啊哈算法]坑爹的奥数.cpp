//http://182.92.86.249/problem.php?pid=1066
#include<bits/stdc++.h>
using namespace std;
int a[10],book[10];
int l = 0;
void dfs(int step){
	if(step==10){
		int num[3]={0};
		int len = 0;
		for(int i=1;i<=9;i++){
			num[len]+=a[i];
			if(i%3==0){
				len++;
			}
			num[len]*=10;
		}
		if(num[0]+num[1]==num[2]){
			l++;
		}
		return;
	}
	for(int i=1;i<=9;i++){
		if(book[i]==0){
			book[i] = 1;
			a[step] = i;
			dfs(step+1);
			book[i] = 0;
		}
	}
	return;
}
int main(){
	dfs(1);
	cout<<l/2;
	return 0;
}
