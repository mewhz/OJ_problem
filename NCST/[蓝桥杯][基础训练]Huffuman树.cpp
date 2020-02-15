//http://182.92.86.249/problem.php?pid=1099
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
	int n;
	cin>>n;
	priority_queue<int,vector<int>,greater<int> > q;
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		q.push(a);
	}
	int sum = 0;
	while(q.size()>1){
		int a = q.top();
		q.pop();
		int b = q.top();
		q.pop();
		int num = a+b;
		sum+=num;
		q.push(num);
	}
	printf("%d",sum);
	return 0;
}
