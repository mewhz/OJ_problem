//https://ac.nowcoder.com/acm/contest/3665/F
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={1,0,0,0,1,0,1,0,2,1};
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int sum = 0;
		char s[20];
		scanf("%s",s);
		for(int j=0;j<strlen(s);j++){
			sum+=a[s[j]-48];
		}
		printf("%d\n",sum);
	}
	return 0;
}
