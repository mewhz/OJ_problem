//https://www.luogu.com.cn/problem/P1303 
#include<bits/stdc++.h>
using namespace std;
int a[50005],b[50005],c[50005];//c��Ž��
int main() {
	string s1,s2;
	int i,j;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	cin>>s1>>s2;
	a[0]=s1.length();
	b[0]=s2.length();
	for(int i=1; i<=a[0]; i++) {
		a[i] = s1[a[0]-i]-'0';
	}
	for(int i=1; i<=b[0]; i++) {
		b[i] = s2[b[0]-i]-'0';
	}
	//��λ����
	for(int i = 1; i<=a[0]; i++) {
		for(int j=1; j<=b[0]; j++) {
			c[i+j-1]+=a[i]*b[j];
			c[i+j]+=c[i+j-1]/10;
			c[i+j-1]%=10;
		}
	}
	int len = a[0]+b[0]+1;
	while((c[len]==0&&(len>1)))len--;//ȥ�����λ����
	for(int i=len; i>=1; i--) {
		cout<<c[i];
	}
	return 0;
}
