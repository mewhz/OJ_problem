//http://182.92.86.249/problem.php?pid=1312
#include<bits/stdc++.h>
using namespace std;
int main() {
	int x1,y1,x2,y2;
	while(scanf("%d%d%d%d",&x1,&y1,&x2,&y2)!=EOF) {
		if(x1==x2) {
			cout<<"INF";
		} else {
			cout<<(y2-y1)/(x2-x1);
		}
		cout<<endl<<endl;
	}
	return 0;
}
