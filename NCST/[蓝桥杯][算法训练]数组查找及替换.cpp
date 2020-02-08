//http://182.92.86.249/problem.php?pid=1305
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int m;
	cin>>n>>m;
	int a[n];
	int j = 0;
	for(int i=0;i<n;i++){
		int s;
		cin>>s;
		if(s%m!=0){
			a[j] = s;
			j++;
		}
	}
	sort(a,a+j);
	for(int i=0;i<j;i++){
		if(a[i]<='Z'&&a[i]>='A'){
			printf("%c ",a[i]);
		}
		else{
			cout<<a[i]<<" ";
		}
	}
	return 0;
} 
