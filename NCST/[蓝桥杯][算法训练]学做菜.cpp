//http://182.92.86.249/problem.php?pid=1316
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int x[10]={0};
	cin>>a>>b>>c>>d;
	while(true){
		if(a>=2&&b>=1&&d>=2){
			x[1]++;
			a-=2;
			b-=1;
			d-=2;
		}
		else{
			break;
		}
	}
	while(true){
		if(a>=1&&b>=1&&c>=1&&d>=1){
			x[2]++;
			a-=1;
			b-=1;
			c-=1;
			d-=1;
		}
		else{
			break;
		}
	}
	while(true){
		if(c>=2&&d>=1){
			x[3]++;
			c-=2;
			d-=1;
		}
		else{
			break;
		}
	}
	while(true){
		if(b>=3){
			x[4]++;
			b-=3;
		}
		else{
			break;
		}
	}
	while(true){
		if(a>=1&&d>=1){
			x[5]++;
			a-=1;
			d-=1;
		}
		else{
			break;
		}
	}
	for(int i=1;i<=5;i++){
		cout<<x[i]<<endl;
	}
	return 0;
}
