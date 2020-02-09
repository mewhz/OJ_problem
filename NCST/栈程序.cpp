//http://182.92.86.249/problem.php?pid=1356
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
string Stack[N+5];
int main(){
	int n;
	cin>>n;
	int head = 0;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(a==1){
			cin>>Stack[head];
			head++;
		}
		else	if(a==2){
			cout<<Stack[--head]<<endl;
		}
		else	if(a==3){
			int s;
			cin>>s;
			cout<<Stack[s-1]<<endl;
		}
	}
	return 0;
}
