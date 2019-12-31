//https://www.dotcpp.com/oj/problem1116.html
#include<bits/stdc++.h>
using namespace std;
int main() {
	char a[35];
	while(scanf("%s",a)!=EOF) {
		int y = 0;
		int flag = 0;
		for(int i=0; i<strlen(a); i++) {
			if(y) {
				printf("N\n");
				break;
			}
			y = 0;
			char b[5];
			int j = 0;
			int k = i;
			while(true) {
				bool s = a[k]<='9'&&a[k]>='0';
				if(s) {
					b[j] = a[k];
				} else	if(a[k]=='.'||k==strlen(a)) {
					b[j] = '\0';
					i = k;
					if(b[0]=='0')
						y = 1;
					int S = atoi(b);
					if(S<0||S>255)
						y = 1;
					if(y==0)flag++;
					break;
				} else {
					y = 1;
					break;
				}
				j++;
				k++;
			}
		}
		if(flag == 4) {
			printf("Y\n");
		}
	}
}
