//ÌâÄ¿Á´½Ó:"https://www.luogu.org/problemnew/show/P1035" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double sum=0,a=1;
	while(1)
	{
		sum+=1/a;
		if(sum>n)
			break;
		a+=1;
	}
	cout<<a;
	return 0;
}
