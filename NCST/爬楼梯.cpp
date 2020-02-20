//http://182.92.86.249/problem.php?pid=1538
#include<bits/stdc++.h>
using namespace std;
int N = 0;
int num = 0;
void down(int n){
	if(n==N){
		num++;
		return;
	}
	if(n>N){
		return;
	}
	down(n+1);
	down(n+2);
	return;
}
int main(){
	cin>>N;
	down(0);
	cout<<num;
	return 0;
}
