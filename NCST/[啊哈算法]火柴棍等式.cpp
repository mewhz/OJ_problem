//http://123.57.166.69/problem.php?pid=1068
#include<bits/stdc++.h>
int num[] = {6,2,5,5,4,5,6,3,7,6};
int fun(int N) {
	char s[20];
	int n = 0;
	sprintf(s,"%d",N);
	for(int i=0; i<strlen(s); i++) {
		n+=num[s[i]-'0'];
	}
	return n;
}
int main() {
	int n;
	for(int q=0; q<=24; q++) {
		int k = 0;
		for(int i=0; i<=1111; i++) {
			for(int j=0; j<=1111; j++) {
				int c = i+j;
				if(fun(i)+fun(j)+fun(c)==q-4) {
					k++;
				}
			}
		}
		printf("%d ",q);
		printf("%d\n",k);
	}

	return 0;
}
