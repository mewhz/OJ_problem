//题目链接:"https://www.luogu.org/problemnew/show/P3150" 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		long long a;
		cin>>a;
		if(((a>>1)<<1)==a)//先右移一位,再左移一位,左移时将最低位变为0,相同为偶数,不同为奇数 
			cout<<"pb wins"<<endl;
		else
			cout<<"zs wins"<<endl; 
	}
	return 0;
}
