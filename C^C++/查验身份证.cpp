//https://pintia.cn/problem-sets/994805260223102976/problems/994805290334011392
#include<bits/stdc++.h>
using namespace std;
int main(){
	char M[] = {'1','0','X','9','8','7','6','5','4','3','2'};
	int N[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int n;
	cin>>n;
	int t=n;
	char a[20];
	for(int i=0;i<n;i++){
		long long sum = 0;
		scanf("%s",a);
		for(int j=0;j<17;j++){
			if(a[j]<'0'||a[j]>'9'){
				cout<<a<<endl;
				t--;
				goto A;
			}
		}
		for(int j=0;j<17;j++){
			sum=(a[j]-48)*N[j]+sum;	
		}
		sum%=11;
		if(a[17]!=M[sum]){
			cout<<a<<endl;
			t--;
			goto A;	
		}
A:	n = n;
	}
	if(t==n){
		cout<<"All passed";
	}
	return 0;
} 
