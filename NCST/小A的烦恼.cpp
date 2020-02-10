//http://182.92.86.249/problem.php?pid=1412
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a[4];
		for(int j=0;j<4;j++){
			cin>>a[j];
		}
		for(int j=0;j<4;j++){
			int num = 0;
			while(a[j]){
				if(a[j]&1){
					num++;
				}
				a[j]>>=1;
			}
			cout<<num<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
