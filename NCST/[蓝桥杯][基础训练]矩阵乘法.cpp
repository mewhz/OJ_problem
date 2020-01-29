//http://182.92.86.249/problem.php?pid=1092
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n+5][n+5];
	int sum[n+5][n+5];
	int f[n+5][n+5];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			sum[i][j] = a[i][j];
			f[i][j] = a[i][j];
		}
	}
	for(int i=0;i<m-1;i++){
		int b = 0;
		for(int j=0;j<n;j++){
			int e = 0;
			for(int k=0;k<n;k++){
				int y = 0,c = 0,d = 0;
				for(int u=0;u<n;u++){
					y += f[b][c]*a[d][e];
					c++;
					d++;
				}
				sum[j][k] = y;
				e++;
			}
			b++;
		}
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				f[j][k] = sum[j][k];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
