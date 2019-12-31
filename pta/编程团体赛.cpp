//https://pintia.cn/problem-sets/994805260223102976/problems/994805277163896832
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a[1005]={0};
	scanf("%d",&n); 
	for(int i=0;i<n;i++){
		int b,c,d;
		scanf("%d-%d",&b,&c);
		scanf("%d",&d);
		a[b]+=d;
	}
	int sum = 0;
	int num = 0;
	for(int i=0;i<1005;i++){
		if(a[i]!=0&&a[i]>sum){
			num = i;
			sum = a[i];
		}
	}
	cout<<num<<" "<<sum; 
	return 0;
}
