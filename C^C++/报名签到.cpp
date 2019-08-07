//ÌâÄ¿Á´½Ó:"https://www.luogu.org/problem/P4445"
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	long long N;
	long long sum = 0;
	cin>>N;
	long long a[N];
	cin>>a[0];
	sum+=a[0];
	for(long long i=1;i<N-1;i++){
		cin>>a[i];
		sum=sum+a[i]*2;
		if(a[i-1]>=a[i]){
			sum-=a[i];
		}
		else{
			sum-=a[i-1];
		}
	}
	cin>>a[N-1];
	sum+=a[N-1];
	if(a[N-1]<=a[N-2]){
		sum-=a[N-1];
	}
	else{
		sum-=a[N-2];
	}
	cout<<sum;
	return 0;
}
