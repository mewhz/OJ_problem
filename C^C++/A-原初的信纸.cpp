//https://ac.nowcoder.com/acm/contest/3036/A
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m;
		scanf("%d",&m);
		int max = 0;
		for(int j=0;j<m;j++){
			int a;
			scanf("%d",&a);
			if(a>max){
				max = a;
			}
		}
		printf("%d\n",max);
	}
	return 0;
} 
