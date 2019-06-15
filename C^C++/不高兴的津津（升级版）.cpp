//ÌâÄ¿Á´½Ó:"https://www.luogu.org/problemnew/show/P1534" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int SUM=0;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		SUM=SUM+a+b-8;
		sum+=SUM;
	}
	cout<<sum;
	return 0;
}
