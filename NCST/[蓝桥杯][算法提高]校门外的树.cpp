//http://182.92.86.249/problem.php?pid=1233
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n+5]={0};
	for(int i=0;i<m;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		for(int j = x;j<=y;j++){
			a[j] = 1;
		}
	}
	int sum = 0;
	for(int i=0;i<=n;i++){
		if(a[i]==0){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
