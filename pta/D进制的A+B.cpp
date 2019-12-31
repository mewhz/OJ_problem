//https://pintia.cn/problem-sets/994805260223102976/problems/994805299301433344
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	long long sum = a+b;
	int n[100];
	int t = 0;
	if(sum==0){
		cout<<0;
		return 0;
	}
	while(true){
		if(sum==0)
			break;
		n[t] = sum%c;
		sum/=c;
		t++;
	}
	for(int i=t-1;i>=0;i--){
		cout<<n[i];
	}
	return 0;
} 
