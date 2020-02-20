//http://182.92.86.249/problem.php?pid=1430
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int m;
	cin>>m;
	int a[15];
	for(int i=0;i<n;i++)	cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(j!=i&&j!=k&&i!=k){
					if(a[j]+a[k]+a[i]==m){
						cout<<"Sindy Win";
						return 0;
					}
				}
			}
		}
	}
	cout<<"Alpha Win";
	return 0;
}
