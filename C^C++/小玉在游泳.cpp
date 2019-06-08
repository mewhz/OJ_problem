//ÌâÄ¿Á´½Ó:"https://www.luogu.org/problemnew/show/P1423" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	double sum=0,s=2,n;
	cin>>n;
	int i=1;
	while(1)
	{
		sum+=s;
		if(sum>=n)
			break;
		s=s*0.98;
		i++;
	}
	cout<<i;
	return 0;
}
