//http://182.92.86.249/problem.php?pid=1433
#include<bits/stdc++.h>
using namespace std;
int num = 0;
void down(int n,int k){
	if(n==0&&k%2==0){
		num++;
		return;
	}
	if(n<0||(n==0&&k%2==1)){
		return;
	}
	down(n-1,k+1);
	down(n-2,k+1);
}
int main(){
	down(39,0);
	cout<<num;
	return 0;
} 
