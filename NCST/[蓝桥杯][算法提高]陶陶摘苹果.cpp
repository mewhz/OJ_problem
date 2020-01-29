//http://182.92.86.249/problem.php?pid=1218
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int sum = 0;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(m+30>=a){
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
