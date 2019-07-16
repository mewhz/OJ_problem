//ÌâÄ¿Á´½Ó:"https://ac.nowcoder.com/acm/contest/992/H" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char m[26];
	for(int i=0;i<26;i++)
		m[i]='a'+i;
	int N;
	while(cin>>N)
	{
		int n=0;
		for(int i=0;i<2*N+1;i++)
		{
			if(i%2==0)
			{
				n-=1;//e
				for(int j=0;j<2*N+1;j++)
				{
					cout<<m[(n+1)%26];
					n++;
				}
			}
			if(i%2==1)
			{
				n+=2*N+1;//n=2+3   f
				int b=n-1;//e
				for(int j=0;j<2*N+1;j++)
				{
					cout<<m[(b+1)%26];//f e d
					b--;//d c b
				}
				n++;
			}
			cout<<endl;
		}
	}
	return 0;
}
