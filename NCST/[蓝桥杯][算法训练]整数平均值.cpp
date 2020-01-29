//http://182.92.86.249/problem.php?pid=1321
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int m;
		cin>>m;
		int sum = 0;
		for(int i=0;i<m;i++){
			int a;
			cin>>a;
			sum+=a;
		}
		sum/=m;
		printf("%d\n",sum);
	}
} 
