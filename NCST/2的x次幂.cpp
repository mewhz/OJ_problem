//http://182.92.86.249/problem.php?pid=1387
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==1){
		cout<<"Yes";
		return 0;
	}
	bool flag = false;
	while(n){
		if(!(n&1)){
			n>>=1;
		}
		else{
			break;
		}
		if(n==1){
			flag = true;
			break;
		}
	}
	if(flag){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
} 
