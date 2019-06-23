//ÌâÄ¿Á´½Ó:"https://www.luogu.org/problemnew/show/P1047" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10005];
	int n;
	cin>>n;
	int N;
	cin>>N;
	for(int i=0;i<=n;i++)
		a[i]=1;
	int sum=0;
	for(int i=0;i<N;i++)
	{
		int A,B;
		cin>>A>>B;
		for(int j=A;j<=B;j++)
			if(a[j]==1)
			{
				a[j]=0;
				sum++;
			}
	}
	cout<<n-sum+1;
}
