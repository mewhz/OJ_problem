//http://182.92.86.249/problem.php?pid=1458
#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c;
	while(cin>>a>>b>>c&&a!=0){
		double p = (a+b+c)/2;
		double sum = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%.2lf\n",sum);
	}
	return 0;
}
