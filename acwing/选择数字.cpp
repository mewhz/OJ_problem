//https://www.acwing.com/problem/content/3580/
#include <bits/stdc++.h> 
using namespace std;
int t[405];
int a[105],b[105];
int main(){
	int n,m;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d",&a[i]);
		t[a[i]] = 1;
	}
	scanf("%d",&m);
	for (int i = 0; i < m; i++){
		scanf("%d",&b[i]);
		t[b[i]] = 1;
	}
	for (int j = 0; j < n; j++){
		for (int i = 0; i < m; i++){
			if (t[a[i] + b[j]] == 0){
				printf("%d %d",a[i],b[j]);
				return 0;
			}
		}
	} 
	return 0;
}
