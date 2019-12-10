//https://ac.nowcoder.com/acm/contest/3036/C
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		char a[105];
		int y = 0;
		int n = 0;
		scanf("%s",a);
		for(int j=0;j<strlen(a);j++){
			if(a[j]=='y'||a[j]=='Y')y++;
			if(a[j]=='n'||a[j]=='N')n++;
		}
		int l = strlen(a)/2;
		if(y>=l)printf("pmznb\n");
		else	if(n>=l)printf("lyrnb\n");
		else printf("wsdd\n");
	}
	return 0;
}
