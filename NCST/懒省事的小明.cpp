//http://182.92.86.249/problem.php?pid=1398
#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m;
		scanf("%d",&m);
		priority_queue<int,vector<int>,greater<int> > q;
		for(int j=0;j<m;j++){
			int a;
			scanf("%d",&a);
			q.push(a);
		}
		long long sum = 0;
		while(q.size()>1){
			int a = q.top();
			q.pop();
			int b = q.top();
			q.pop();
			int num = a+b;
			sum+=num;
			q.push(num);
		}
		printf("%lld\n",sum);
	}
	return 0;
}
