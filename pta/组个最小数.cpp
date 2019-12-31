//https://pintia.cn/problem-sets/994805260223102976/problems/994805298269634560
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[60];
	int t = 0;
	for(int i=0;i<10;i++){
		int v;
		scanf("%d",&v);
		for(int j=0;j<v;j++){
			a[t] = i;
			t++;
		}
	}
	sort(a,a+t);
	for(int i=0;i<t;i++){
		if(a[i]==0)
			continue;
		cout<<a[i];
		a[i] = -1;
		break;
	}
	for(int i=0;i<t;i++){
		if(a[i]==-1)
			continue;
		cout<<a[i];
	}
	return 0;
}
