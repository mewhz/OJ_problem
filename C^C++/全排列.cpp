//https://www.acoj.com/problems/12031/submission-detail?q=1574927887000 
#include <bits/stdc++.h>
using namespace std;
int n,flag[10],a[10];
void dfs(int s)//s：此时所在的位置
{
	if(s==n+1)
	{
		for(int i=1;i<=n;i++)
			printf("%d",a[i]);
		printf("\n");
	}
	for(int i=1;i<=n;i++)
	{
		if(flag[i]==0)
		{
			a[s]=i;//如果没有放置这个数字，那么就放
			flag[i]=1;//该数字已经被使用
			dfs(s+1);
			flag[i]=0;//收回已经使用的数字
		}
	}
	return;
}
int main()
{
	scanf("%d",&n);
	dfs(1);
	return 0;
}
