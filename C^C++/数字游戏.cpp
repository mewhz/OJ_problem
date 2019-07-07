//ÌâÄ¿Á´½Ó:"https://ac.nowcoder.com/acm/contest/984/H" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int i=0;
	while(1)
	{
		if(N==1)
			break;
		else
			i++;
		if(N%2==0)
			N=N/2;
		else	if(N%2==1)
			N=N*3+1; 
	}
	cout<<i;
	return 0;
}
