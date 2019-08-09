//题目链接:"https://www.dotcpp.com/oj/problem1004.html" 
#include<bits/stdc++.h>
using namespace std;
int a[60]={0}; 
void cow(int n){	//动态规划 
	for(int i=6;i<=n;i++){
		a[i] = a[i-1]+a[i-2]-a[i-5]; 
	}
}
int main(){
	int N;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 4;
	a[5] = 6;
	while(cin>>N){
		if(N==0)
			break;
		cow(N);
		cout<<a[N]<<endl;
	}
	return 0;
}
