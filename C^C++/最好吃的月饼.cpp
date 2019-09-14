//ÌâÄ¿Á´½Ó:"https://pintia.cn/problem-sets/994805260223102976/problems/1071785779399028736" 
#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int n,m;
	int a[1005]={0};
	int sum;
	int c[1005]={0};
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			int b;
			scanf("%d",&b);
			a[j]+=b;
		}
	}
	sum = a[0];
	int T = 0;
	for(int i=1;i<n;i++)
		sum = max(a[i],sum);
	for(int i=0;i<n;i++){
		if(sum==a[i]){
			c[T] = i+1;
			T++;
		}
	}
	cout<<sum<<endl;
	for(int i=0;i<T;i++){
		if(i!=T-1)
			cout<<c[i]<<" ";
		else
			cout<<c[i];
	}
	return 0;
}
