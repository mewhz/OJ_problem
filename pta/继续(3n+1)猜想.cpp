//https://pintia.cn/problem-sets/994805260223102976/problems/994805320306507776
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int b[1005]={0};
	for(int i=0;i<n;i++){
		int c;
		cin>>c;
		a[i] = c;
		while(c!=1){
			if(c%2==1)
				c = 3*c+1;
			c/=2;
			if(b[c]==1)
				break;
			b[c] = 1;
		}
	}
	int A[n],t = 0;
	for(int i=0;i<n;i++){
		if(b[a[i]]!=1){
			A[t] = a[i];
			t++;
		}
	}
	sort(A,A+t);
	for(int i=t-1;i>=0;i--){
		cout<<A[i];
		if(i!=0)
			cout<<" ";
	}
	return 0;
}
