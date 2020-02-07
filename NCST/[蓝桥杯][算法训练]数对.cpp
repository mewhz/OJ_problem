//http://182.92.86.249/problem.php?pid=1302
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%d * %d = %d\n",i,n/i,n);
		}
	}
	return 0;
}
