//http://182.92.86.249/problem.php?pid=1090
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int main(){
	int n;
	scanf("%d",&n);
	int c[N+5];
	int B[N+5];
	int len;
	B[0] = 1;
	B[1] = 1;
	for(int i=2;i<=n;i++){
		char a[N+5];
		sprintf(a,"%d",i);
		int A[N+5];
		A[0] = strlen(a);
		for(int j=1;j<=A[0];j++){
			A[j] = a[A[0]-j]-'0';
		}
		memset(c,0,sizeof(c));
		for(int k=1;k<=A[0];k++){
			for(int j=1;j<=B[0];j++){
				c[k+j-1]+=A[k]*B[j];
				c[k+j]+=c[k+j-1]/10;
				c[k+j-1]%=10;
			}
		}
		c[0] = A[0]+B[0]+1;
		while((c[c[0]]==0)&&(c[0]>1))c[0]--;
		len = c[0];
		for(int j=0;j<=len;j++){
			B[j] = c[j];
		}
	}
	for(int i=len;i>=1;i--){
		printf("%d",c[i]);
	}
	return 0;
}
