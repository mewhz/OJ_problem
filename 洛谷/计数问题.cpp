//ÌâÄ¿Á´½Ó:"https://www.luogu.org/problemnew/show/P1980" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	int a;
	cin>>a;
	long long w=0;
	for(long long i=1;i<=n;i++)
	{
		char s[10];
		sprintf(s,"%lld",i);
		for(long long j=0;j<strlen(s);j++)
		{
			if(s[j]==a+48)
				w++;
		}
	}
	cout<<w;
	return 0;
}
