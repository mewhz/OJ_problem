//ÌâÄ¿Á´½Ó"https://www.luogu.org/problemnew/show/P1089" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum=300;
	int N=0;
	for(int i=1;i<=12;i++)
	{
		int a;
		cin>>a;
		sum-=a;
		if(sum<0)
		{
			cout<<"-"<<i;
			break;
		}
		if(sum>=100)
		{
			int a=sum/100;
			sum-=a*100;
			N+=a*100;
		}
		if(i!=12)
			sum+=300; 
		if(i==12)
		{
			N=N*0.2+N+sum;
			cout<<N;
			break;
		}
	}
	return 0;
}
