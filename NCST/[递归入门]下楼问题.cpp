//http://182.92.86.249/problem.php?pid=1375
#include<bits/stdc++.h>
using namespace std;
int num = 0;
void down(int n){
	if(n==0){
		num++;
		return;
	}
	if(n<0){
		return;
	}
	else{
		down(n-1);
		down(n-2);
		down(n-3);
	}
	return;
}
int main(){
	int n;
	cin>>n;
	down(n);
	cout<<num;
	return 0;
} 
