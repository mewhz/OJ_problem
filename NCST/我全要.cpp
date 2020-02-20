//http://182.92.86.249/problem.php?pid=1442
#include<bits/stdc++.h>
using namespace std;
int DP[1005][1005];
int max(int a,int b){
	return a>=b?a:b;
}
int main(){
	int N,V;
	cin>>N>>V;
	int w[N+5],v[N+5];
	for(int i=1;i<=N;i++){
		cin>>w[i];
		v[i] = 1;
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=V;j++){
			if(j<v[i]){
				DP[i][j] = DP[i-1][j];
			}
			else{
				DP[i][j] = max(DP[i-1][j-v[i]]+w[i],DP[i-1][j]);
			}
		}
	}
	cout<<DP[N][V];
	return 0;
}
