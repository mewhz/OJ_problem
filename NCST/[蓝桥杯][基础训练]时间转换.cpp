#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	if(t==0){
		cout<<"0:0:0"<<endl;
	}
	else{
		int h = t/3600;
		t-=h*3600;
		int m = t/60;
		t-=m*60;
		cout<<h<<":"<<m<<":"<<t<<endl;
	}
	return 0;
} 
