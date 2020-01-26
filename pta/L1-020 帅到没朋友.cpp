//https://pintia.cn/problem-sets/994805046380707840/problems/994805117167976448
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int main(){
	int n;
	scanf("%d",&n);
	int a[N+5] = {0};
	for(int i=0;i<n;i++){
		int m;
		scanf("%d",&m);
		for(int j=0;j<m;j++){
			int k;
			scanf("%d",&k);
			if(m!=1){
				a[k] = 1;
			}
		}
	}
	scanf("%d",&n);
	bool flag = true;
	bool begin = false;
	for(int i=0;i<n;i++){
		int k;
		scanf("%d",&k);
		if(a[k]==0){
			if(begin){
				printf(" ");
			}
			printf("%05d",k);
			flag = false;
			begin = true;
			a[k] = 1;
		}
	}
	if(flag){
		printf("No one is handsome");
	}
	return 0;
}
