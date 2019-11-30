//https://pintia.cn/problem-sets/994805260223102976/problems/994805285812551680
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	char c;
	cin>>n>>c;
	char a[30];
	char b[30];
	for(int i=0;i<n;i++){
		a[i] = c;
	}
	a[n] = '\0';
	for(int i=1;i<n-1;i++){
		b[i] = ' ';
	}
	b[0] = c;
	b[n-1] = c;
	cout<<a<<endl;
	if(n%2==1){
		for(int i=0;i<n/2-1;i++){
			cout<<b<<endl;
		}
	}
	else{
		for(int i=0;i<n/2-2;i++){
			cout<<b<<endl;
		}
	}
	cout<<a;
	return 0;
}
