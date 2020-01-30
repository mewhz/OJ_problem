//http://182.92.86.249/problem.php?pid=1383
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[4];
	for(int i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	set<int> s;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			for(int k=0;k<4;k++){
				for(int l=0;l<4;l++){
					if(i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&k!=l){
						int num = a[i]*1000+a[j]*100+a[k]*10+a[l];
						s.insert(num);
					}
				}
			}
		}
	}
	for(set<int>::iterator it = s.begin();it!=s.end();it++){
		printf("%d ",*it);
	}
	return 0;
}
