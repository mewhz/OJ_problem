//https://www.acoj.com/problems/12031/submission-detail?q=1574927887000 
#include <bits/stdc++.h>
using namespace std;
int n,flag[10],a[10];
void dfs(int s)//s����ʱ���ڵ�λ��
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
			a[s]=i;//���û�з���������֣���ô�ͷ�
			flag[i]=1;//�������Ѿ���ʹ��
			dfs(s+1);
			flag[i]=0;//�ջ��Ѿ�ʹ�õ�����
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
