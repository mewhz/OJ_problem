//http://182.92.86.249/problem.php?pid=1380
#include<bits/stdc++.h>
using namespace std;
double P = 3.1415926;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		double sum = pow(a,P);
		cout<<setiosflags(ios::fixed)<<setprecision(b)<<sum<<endl;
	}
	return 0;
}
