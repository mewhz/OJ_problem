//��Ŀ����:"https://www.luogu.org/problemnew/show/P3150" 
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
		if(((a>>1)<<1)==a)//������һλ,������һλ,����ʱ�����λ��Ϊ0,��ͬΪż��,��ͬΪ���� 
			cout<<"pb wins"<<endl;
		else
			cout<<"zs wins"<<endl; 
	}
	return 0;
}
