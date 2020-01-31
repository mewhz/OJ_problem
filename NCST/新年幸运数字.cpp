//http://182.92.86.249/problem.php?pid=1593
#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	num/=7;
	char a[20];
	sprintf(a,"%d",num);
	cout<<a[0]<<endl;
	return 0; 
}
