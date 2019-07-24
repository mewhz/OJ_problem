//ÌâÄ¿Á´½Ó:"https://www.luogu.org/problemnew/show/P2141" 
#include<bits/stdc++.h>
using namespace std;
int a[105];
int N;
int s[105] = {0};
int p=0;
bool BJ1(int x)
{
	for(int i=0;i<p;i++)
		if(x==s[i])
			return false;
	return true;
}
bool BJ(int x,int y)
{
	for(int i=0;i<N;i++)
	{
		if(x+y==a[i]&&BJ1(a[i]))
		{
			s[p] = a[i];
			return true;	
		}
	}
	return false;
}
int main()
{
	cin>>N;
	int sum = 0;
	for(int i=0;i<N;i++)
		cin>>a[i];
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(BJ(a[i],a[j]))
			{
				sum++;
				p++;
			}
		}
	}
	cout<<sum;
	return 0;
}
