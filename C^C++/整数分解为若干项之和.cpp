//��Ŀ����:"https://pintia.cn/problem-sets/14/problems/2990" 
#include<bits/stdc++.h>
using namespace std;
int t[31];//��������
int n;//���������
int sum=0;//�ۼӺ�
int k=0;//�ۼ�����
int top=0;//������������� 
void dfs(int N) {
	if(sum==n){
		cout<<n<<"="<<t[0];
		for(int i=1;i<=top-1;i++)
			cout<<"+"<<t[i];
		k++;
		if(k%4==0||top==1)
			cout<<endl;
		else
			cout<<";";
	}
	if(sum>n)
		return;
	for(int i=N;i<=n;i++){
		sum+=i;
		t[top++]=i;
		dfs(i);
		sum-=i;
		top--;
	}
}
int main() {
	cin>>n;
	dfs(1);
	return 0;
}
