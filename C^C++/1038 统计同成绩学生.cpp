//https://pintia.cn/problem-sets/994805260223102976/problems/994805284092887040
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[105]={0};
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int b;
		scanf("%d",&b);
		a[b]++;
	}
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int c;
		scanf("%d",&c);
		if(i!=m-1){
			cout<<a[c]<<" ";	
		}
		if(i==m-1){
			cout<<a[c];
		}
	}
	return 0;
} 
