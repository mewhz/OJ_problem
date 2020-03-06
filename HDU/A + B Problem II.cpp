//http://acm.hdu.edu.cn/showproblem.php?pid=1002
#include<bits/stdc++.h>
using namespace std;
void add(string a,string b){
	int A[1005],B[1005];
	memset(A,0,sizeof(A));
	memset(B,0,sizeof(B));
	A[0] = a.length();
	B[0] = b.length();
	for(int i=1;i<=A[0];i++)	A[i] = a[A[0]-i]-'0';
	for(int i=1;i<=B[0];i++)	B[i] = b[B[0]-i]-'0';
	int len = A[0]>B[0]?A[0]:B[0];
	for(int i=1;i<=len;i++){
		A[i]+=B[i];
		A[i+1]+=A[i]/10;
		A[i]%=10;
	}
	len++;
	while((A[len]==0)&&(len>1))	len--;
	for(int i=len;i>=1;i--)	printf("%d",A[i]);
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		string a,b;
		cin>>a>>b;
		if(i!=0)	printf("\n");
		printf("Case %d:\n",i+1);
		cout<<a<<" + "<<b<<" = ";
		add(a,b);
		printf("\n");
	}
	return 0; 
} 
