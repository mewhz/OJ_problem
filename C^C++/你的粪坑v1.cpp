//ÌâÄ¿Á´½Ó:"https://ac.nowcoder.com/acm/contest/948/I" 
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int N;
	cin>>N;
	for(int i=0; i<N; i++)
	{
		string a1,a2,b1,b2;
		cin>>a1>>a2>>b1>>b2;
		if(a2!=b2) 
		{
			if(a2=="jiandao"&&b2=="bu")
				cout<<b1;
			else	if(a2=="jiandao"&&b2=="shitou")
				cout<<a1;
			else	if(a2=="bu"&&b2=="jiandao")
				cout<<a1;
			else	if(a2=="bu"&&b2=="shitou")
				cout<<b1;
			else	if(a2=="shitou"&&b2=="jiandao")
				cout<<b1;
			else	if(a2=="shitou"&&b2=="bu")
				cout<<a1;
			cout<<" chishi"<<endl;
		}
		else
			cout<<"yi qi chi shi"<<endl;
	}
	return 0;
}
