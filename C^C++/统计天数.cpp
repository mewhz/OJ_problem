//ÌâÄ¿Á´½Ó:"https://www.luogu.org/problemnew/show/P1567" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	int a;
	cin>>N>>a;
	int sum=0,s=0;
	for(int i=0;i<N-1;i++)
	{
		int b;
		cin>>b;
		if(b>a)
			s++;
		else
		{
			if(s>=sum)
				sum=s;
			s=0;
		}
		a=b;
	}
	cout<<sum+1;
	return 0;
}
