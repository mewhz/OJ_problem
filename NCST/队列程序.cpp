//http://182.92.86.249/problem.php?pid=1357
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
char q[N+5][20];
int main(){
	int n;
	scanf("%d",&n);
	int head  = 0;
	int t = 0;
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		if(a==1){
			char s[20];
			scanf("%s",s);
			strcpy(q[t],s);
			t++;
		}
		if(a==2){
			printf("%s\n",q[head]);
			head++;
		}
		if(a==3){
			int k;
			scanf("%d",&k);
			printf("%s\n",q[head+k-1]);
		}
	}
	return 0;
}
