//http://182.92.86.249/problem.php?pid=1301
#include<bits/stdc++.h>
using namespace std;
const int N = 1e4;
int a[N+5];
int main(){
	int n;
	cin>>n;
	int max = 0;
	for(int i=0;i<n;i++){
		int s;
		cin>>s;
		a[s]++;
		if(s>max){
			max = s;
		}
	}
	for(int i=0;i<=max;i++){
		if(a[i]!=0){
			printf("%d %d\n",i,a[i]);
		}
	}
	return 0;
}
