//ÌâÄ¿Á´½Ó:"https://www.luogu.org/problem/P4439" 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	char a[N];
	int k = 0;
	if(N>0){
		cin>>a[0];
		k++;
	}
	for(int i=1;i<N;i++){
		cin>>a[i];
		if(a[i]!=a[i-1])
			k++;
	}
	cout<<k+1<<endl;
	return 0;
}
