//https://www.luogu.org/problem/P1116 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a[10005];
	int m = 0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=n-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				m++;
			}
		}
	}
	cout<<m;
	return 0; 
}
