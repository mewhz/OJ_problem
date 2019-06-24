//ÌâÄ¿Á´½Ó:"https://pintia.cn/problem-sets/994805046380707840/problems/1111914599412858883" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		char a[10];
		cin>>a;
		if(a[0]+a[1]+a[2]==a[3]+a[4]+a[5])
			cout<<"You are lucky!"<<endl;
		else
			cout<<"Wish you good luck."<<endl;
	}
	return 0;
}
