//ÌâÄ¿Á´½Ó:"https://www.luogu.org/problemnew/show/P1046" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10];
	int n;
	for(int i=0;i<10;i++)
		cin>>a[i];
	cin>>n;
	n+=30;
	int s=0;
	for(int i=0;i<10;i++)
		if(n>=a[i])
			s++;
	cout<<s;
	return 0;
}
