//http://182.92.86.249/problem.php?pid=1253
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[15],b[15];
	int aum = 0,bum = 0;
	for(int i=0;i<10;i++){
		cin>>a[i]>>b[i];
		aum+=a[i];
		bum+=b[i];
	}
	cout<<aum<<"+"<<bum<<"i";
	return 0;
}
