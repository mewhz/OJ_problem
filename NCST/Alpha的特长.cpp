//http://182.92.86.249/problem.php?pid=1428
#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int n;
		cin>>n;
		int sum = 0;
		for(int j=0;j<n;j++){
			int a;
			cin>>a;
			sum+=abs(a);
		}
		cout<<sum<<endl;
	}
	return 0;
}
