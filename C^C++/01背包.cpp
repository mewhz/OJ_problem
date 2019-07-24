//ÌâÄ¿Á´½Ó:"https://www.acwing.com/problem/content/2/" 
#include<bits/stdc++.h>
using namespace std;
int DP[1005][1005] = {0};
int max(int a,int b)
{
	if(a>=b)
		return a;
	else
		return b;
}
int main()
{
	int N,V;
	cin>>N>>V;
	int w[N+1],v[V+1];
	for(int i=1;i<=N;i++)
		cin>>v[i]>>w[i];
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=V;j++)
		{
			if(j<v[i])
				DP[i][j] = DP[i-1][j];
			else
				DP[i][j] = max(DP[i-1][j-v[i]]+w[i],DP[i-1][j]);
		}
	}
	cout<<DP[N][V];
	return 0;
}
