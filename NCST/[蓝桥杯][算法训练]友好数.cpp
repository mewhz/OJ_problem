//http://182.92.86.249/problem.php?pid=1319
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a = 0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			a+=i;
		}
	}
	if(a!=m){
		printf("no");
		return 0;
	}
	int b = 0;
	for(int i=1;i<m;i++){
		if(m%i==0){
			b+=i;
		}
	}
	if(b==n){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
} 
