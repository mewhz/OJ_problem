//http://182.92.86.249/problem.php?pid=1058
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[1005]={0};
	for(int i=0;i<n;i++){
		int k;
		scanf("%d",&k);
		a[k]++;
	}
	for(int i=1000;i>=0;i--){
		for(int j=0;j<a[i];j++){
			printf("%d ",i);
		}
	}
	return 0;
}
