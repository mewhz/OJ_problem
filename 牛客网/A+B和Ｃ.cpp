//ÌâÄ¿Á´½Ó"https://www.nowcoder.com/pat/6/problem/4077"
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100],b[100],c[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i]>>b[i]>>c[i];
	bool d[100];
	for(int i=0;i<n;i++)
		d[i]=(a[i]+b[i]>c[i]);
	for(int i=0;i<n;i++)
	{
		cout<<"Case #"<<i+1<<": ";
		if(d[i])
			cout<<"true"<<endl;
		else
			cout<<"false"<<endl;
	}	
	return 0;
}
