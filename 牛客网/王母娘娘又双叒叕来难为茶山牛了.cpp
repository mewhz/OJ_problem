//https://ac.nowcoder.com/acm/contest/7009/B
#include<bits/stdc++.h>
using namespace std;
long long JC(long long s,int b){
	long long SUM = 1;
	for(long long i=2;i<=s;i++){
		SUM = ( (SUM % b) * (i % b) ) % b; 
	}
	return SUM;
}
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a==1||a==2){
			printf("%d\n",a%b);
		}
		else	if(a==3){
			long long sum = 3;
			for(int j=0;j<3;j++){
				sum = JC(sum,b);	
			}
			printf("%lld\n",sum);
		}
		else{
			printf("0\n");
		}
	}
	return 0;
}
