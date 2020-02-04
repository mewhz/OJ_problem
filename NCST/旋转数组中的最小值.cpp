//http://182.92.86.249/problem.php?pid=1462
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int min = 99999;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		if(a<min){
			min = a;
		}
	}
	printf("%d",min);
	return 0;
}
