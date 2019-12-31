//https://www.luogu.org/problem/P2550
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a[7];
	int p[8]={0};
	scanf("%d",&n);
	for(int i=0;i<7;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		int t = 0;
		int c;
		for(int j=0;j<7;j++){
			scanf("%d",&c);
			for(int s = 0;s<7;s++){
				if(c==a[s]){
					t++;
					break;
				}
			}
		}
		p[t]++;
	}
	for(int i=7;i>0;i--){
		cout<<p[i]<<" ";
	}
	return 0;
}
