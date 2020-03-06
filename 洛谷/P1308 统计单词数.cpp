//https://www.luogu.com.cn/problem/P1308
#include<bits/stdc++.h>
using namespace std;
int main() {
	string a,b;
	cin>>a;
	getchar();
	getline(cin,b);
	for(int i=0; i<a.length(); i++)	if(a[i]<='Z'&&a[i]>='A')	a[i]+=32;
	for(int i=0; i<b.length(); i++)	if(b[i]<='Z'&&b[i]>='A')	b[i]+=32;
	int l = -1;
	int n = -1;
	int num = 0;
	int flag = 1;
	for(int i=0;i<b.length();i++){
		l = i;
		if(b[i]==' ')	continue;
		string s;
		int k = i;
		while(1){
			if(b[k]==' '||k==b.length())	break;
			s+=b[k];
			k++;
		}
		i = k-1;
		if(s==a){
			if(flag){
				n = l;
				flag = 0;
			}
			num++;
		}
		
	} 
	if(n==-1)	printf("-1");
	else	printf("%d %d",num,n);
	return 0;
}
