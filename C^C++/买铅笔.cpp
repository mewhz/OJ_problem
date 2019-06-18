//ÌâÄ¿Á´½Ó:"https://www.luogu.org/problemnew/show/P1909" 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct
{
	double a,b,c;
}str;
bool cmp(str A,str B)
{
	return A.c<B.c;
}
int main()
{
	ll n;
	cin>>n;
	ll sum=0; 
	str s[3];
	for(int i=0;i<3;i++)
	{
		cin>>s[i].a>>s[i].b;
		if((n%(int)s[i].a)==0)
			s[i].c=(n/(int)s[i].a)*s[i].b;
		else
			s[i].c=(n/(int)s[i].a+1)*s[i].b;
	}
	sort(s,s+3,cmp);
	printf("%.0lf",s[0].c);
	return 0;
}
