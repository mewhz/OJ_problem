//https://pintia.cn/problem-sets/994805260223102976/problems/994805277847568384
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int c = 0;
	int b = 0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a[4];
		for(int j=0;j<4;j++)	scanf("%d",&a[j]);
		int sum = a[0]+a[2];
		bool J = false;
		bool Y = false;
		if(a[1]==sum){
			J = true;
		}
		if(a[3]==sum){
			Y = true;
		}
		if(J==Y){
			continue;
		}
		else	if(J){
			c++;
		}
		else	if(Y){
			b++;
		}
	}
	printf("%d %d",b,c);
	return 0;
} 
