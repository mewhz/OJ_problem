//ÌâÄ¿Á´½Ó:"https://ac.nowcoder.com/acm/contest/903/K" 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct
{
	char s[50];
	ll a;
}str; 
int main()
{
	ll n,m;
	cin>>n>>m;
	str k[1005];
	for(ll i=0;i<n;i++)
		cin>>k[i].s>>k[i].a;
	for(ll i=0;i<m;i++)
	{
		int h;
		cin>>h;
		for(ll j=0;j<h;j++)
		{
			char q[50];
			int g;
			cin>>q>>g;
			for(ll b=0;b<n;b++)
				if(strcmp(k[b].s,q)==0)
				{
					k[b].a-=g;
					if(k[b].a<0)
					{
						cout<<"NO";
						return 0;
					}
					break;
				}
		}
	}
	cout<<"YES"<<endl;
	for(ll i=0;i<n;i++)
	{
		if(k[i].a!=0)
			cout<<k[i].s<<" "<<k[i].a<<endl;
	}
	return 0;
}
