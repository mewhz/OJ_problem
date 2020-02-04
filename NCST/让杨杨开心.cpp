//http://182.92.86.249/problem.php?pid=1459
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	int a[105][105];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j]; 
		}
	}
	int len;
	cin>>len;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]>=len){
				cout<<"1 ";
			}
			else{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
	return 0;
}
