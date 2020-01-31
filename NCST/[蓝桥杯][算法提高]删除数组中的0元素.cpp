//http://182.92.86.249/problem.php?pid=1146
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int len = 0;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		if(num!=0){
			a[len] = num;
			len++;
		}
	}
	for(int i=0;i<len;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl<<len;
	return 0;
}
