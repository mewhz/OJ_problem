//https://pintia.cn/problem-sets/994805260223102976/problems/994805289432236032
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int a[N+5] = {0};
int main(){
	int n;
	scanf("%d",&n);
	int num = 0; 
	for(int i=0;i<n;i++){
		int k = 0,m = 0;
		scanf("%d",&k);
		if(k>num)	num = k;
		scanf("%d",&m);
		a[k] += m;
	}
	int max = 0;
	int m = 0;
	for(int i=1;i<=num;i++){
		if(a[i]>max){
			max = a[i];
			m = i;
		}
	}
	printf("%d %d",m,max);
	return 0;
}
