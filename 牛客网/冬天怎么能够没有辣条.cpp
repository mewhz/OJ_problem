//https://ac.nowcoder.com/acm/contest/3667/E
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		if(n==1){
			cout<<a[0]<<" "<<a[0]<<endl;
		}
		else{
			cout<<a[n-2]<<" "<<a[1]<<endl;
		}
	}
	return 0;
} 
