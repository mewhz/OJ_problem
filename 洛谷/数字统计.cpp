//ÌâÄ¿Á´½Ó:"https://www.luogu.org/problemnew/show/P1179" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,sum=0;
	cin>>n>>m;
	for(int i=n;i<=m;i++)
	{
		char a[10];
		sprintf(a,"%d",i);
		for(int j=0;j<strlen(a);j++)
		{
			if(a[j]=='2')
				sum++;
		}
	}
	cout<<sum;
	return 0;
}
