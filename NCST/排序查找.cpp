//http://182.92.86.249/problem.php?pid=1589
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int s;
		cin>>s;
		cout<<a[s-1]<<endl;
	}
	return 0;
} 
