//ÌâÄ¿Á´½Ó:"https://www.luogu.org/problemnew/show/P1424" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long l,L;
	long sum=0;
	int i=0;
	cin>>l>>L;
	while(1)
	{
		if(i==L)
			break;
		if(l%6==0)
		{
			i++;
			l++;
			continue;
		}
		else	if(l%7==0)
		{
			i++;
			l=1;
			continue;
		}
		sum+=250;
		i++;
		l++;
	}
	cout<<sum;
	return 0;
}
