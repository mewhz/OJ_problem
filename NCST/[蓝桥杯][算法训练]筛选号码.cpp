//http://182.92.86.249/problem.php?pid=1297
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		a[i] = 1;
	}
	int l = n;
	int len = 0;
	while(l!=1){
		for(int i=0;i<n;i++){
			if(a[i]==1){
				len++;
			}
			if(len==3){
				a[i] = 0;
				len = 0;
				l--;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]==1){
			cout<<i+1;
		}
	}
	return 0;
}
