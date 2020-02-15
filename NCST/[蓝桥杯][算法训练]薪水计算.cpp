//http://182.92.86.249/problem.php?pid=1314
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double m;
	cin>>n>>m;
	double sum = 0;
	if(m<=40){
		sum = n*m;
	}
	else	if(m>40&&m<=50){
		sum = m*40;
		n-=40;
		sum = sum+n*(m*1.5);
	}
	else	if(m>50){
		sum = m*40;
		n-=40;
		sum = sum+n*(m*1.5);
		n-=10;
		sum = sum+n*(m*2);
	}
	printf("%.2lf",sum);
	return 0;
} 
