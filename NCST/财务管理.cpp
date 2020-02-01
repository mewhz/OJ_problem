//http://182.92.86.249/problem.php?pid=1596
#include<bits/stdc++.h>
using namespace std;
int main(){
	double sum = 0;
	for(int i=0;i<12;i++){
		double k;
		cin>>k;
		sum+=k; 
	}
	printf("%.2lf",sum/12);
	return 0;
}
