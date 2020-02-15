//http://182.92.86.249/problem.php?pid=1345
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n+5];//1代表开着灯,0代表关灯 
	for(int i=1;i<=n;i++){
		a[i] = 1;
	}
	for(int i=2;i<=m;i++){
		for(int j=2;j<=n;j++){
			if(j%i==0){
				a[j] = !a[j];
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]==1){
			printf("%d ",i);
		}
	}
	return 0;
}
