//ÌâÄ¿Á´½Ó:"https://ac.nowcoder.com/acm/contest/948/E" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int N=0;
	for(int i=n;i<=m;i++)
	{
		char a[20];
		sprintf(a,"%d",i);
		for(int j=0;j<strlen(a);j++)
			if(a[j]=='2')
				N++;	
	}
	cout<<N;
	return 0;
}
