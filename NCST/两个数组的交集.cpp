//http://182.92.86.249/problem.php?pid=1478
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[105];
	int b[105];
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		int s;
		scanf("%d",&s);
		for(int j=0;j<n;j++){
			if(a[j]==s){
				int k;
				for(k=0;k<i;k++){
					if(a[j]==b[k]){
						break;
					}
				}
				if(k==i){
					printf("%d ",s);
					b[i] = s;
					break;
				}
				else{
					break;
				}
			}
		}
	}
	return 0;
} 
