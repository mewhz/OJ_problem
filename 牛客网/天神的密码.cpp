//ÌâÄ¿Á´½Ó:"https://ac.nowcoder.com/acm/contest/903/H" 
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int N;
	cin>>N;
	int D[N];
	long long n; 
	for(int i=0; i<N; i++) 
	{
		int a;
		long long b;
		cin>>b>>a;
		if(a==1)
			n=b;
		else	if(a==2)
			n=b*b;
		char c[20];
		sprintf(c,"%lld",n);
		while(1)
		{
			n=0;
			for(int j=0; j<strlen(c); j++) 
				n=c[j]-48+n;
			sprintf(c,"%lld",n);
			if(strlen(c)==1)
			{
				D[i]=n;
				break;
			}
		}
	}
	for(int i=0;i<N;i++)
		cout<<D[i]<<endl;
	return 0;
}
