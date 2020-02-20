//http://182.92.86.249/problem.php?pid=1451
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++){
		a[i] = i+1;
	}
	do{
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}while(next_permutation(a,a+n));
	return 0;
}
