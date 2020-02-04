//http://182.92.86.249/problem.php?pid=1062
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	queue<int> q;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		q.push(a);
	}
	while(q.size()!=0){
		int a = q.front();
		cout<<a<<" ";
		q.pop();
		a = q.front();
		q.push(a);
		q.pop(); 
	}
	return 0;
}
