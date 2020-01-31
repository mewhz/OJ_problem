//http://182.92.86.249/problem.php?pid=1478
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int num[N]={0};
int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	int b[m];
	for(int i=0;i<n;i++){
		cin>>a[i];
		num[a[i]] = 1;
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
		if(num[b[i]]==1){
			cout<<b[i]<<" ";
			num[b[i]] = 0;
		}
	}
	return 0;
} 
