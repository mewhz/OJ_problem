//https://www.luogu.org/problem/P1319
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int t = 0;
	int flag = 0;
	while(1){
		if(t==N*N){
			break;
		}
		int a;
		cin>>a;
		if(flag==0){
			for(int i=1;i<=a;i++){
				cout<<"0";
				t++;
				if(t%N==0){
					cout<<endl;
				}
			}
		}
		if(flag==1){
			for(int i=1;i<=a;i++){
				cout<<"1";
				t++;
				if(t%N==0){
					cout<<endl;
				}
			}
		}
		flag = !flag;
	}
	return 0;
} 
