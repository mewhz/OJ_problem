//ÌâÄ¿Á´½Ó:"https://pintia.cn/problem-sets/994805260223102976/problems/994805284923359232" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3],b[3],t=0;
	scanf("%d.%d.%d",&a[0],&a[1],&a[2]);
	scanf("%d.%d.%d",&b[0],&b[1],&b[2]);
	long sum=a[0]*17*29+a[1]*29+a[2],SUM=b[0]*17*29+b[1]*29+b[2];
	long n=SUM-sum;
	if(n<0)
		t=1;
	int c[3];
	c[0]=n/17/29;
	n=n-c[0]*17*29;
	c[1]=n/29;
	n%=29;
	c[2]=n;
	if(t)
	{
		cout<<"-";
		for(int i=0;i<3;i++)
			c[i]*=-1; 
	}	
	for(int i=0;i<3;i++)
	{
		cout<<c[i];
		if(i!=2)
			cout<<".";
	}
	return 0;
}
