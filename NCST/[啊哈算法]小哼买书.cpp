//http://182.92.86.249/problem.php?pid=1061
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	set<int> s;
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		s.insert(a);
	}
	printf("%d\n",s.size());
	set<int>::iterator it;
	for(it = s.begin();it!=s.end();it++){
		printf("%d ",*it);
	}
	return 0;
}
