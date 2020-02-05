//http://182.92.86.249/problem.php?pid=1152
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int answer[40] = {0};
	for(int i=0;i<7;i++){
		int a;
		cin>>a;
		answer[a]++;
	}
	int s[10]={0};
	for(int i=0;i<n;i++){
		int num = 0;
		for(int j=0;j<7;j++){
			int a;
			cin>>a;
			if(answer[a]!=0){
				num++;
			}
		}
		s[num]++;
	}
	for(int i=7;i>0;i--){
		cout<<s[i]<<" ";
	}
	return 0;
}
