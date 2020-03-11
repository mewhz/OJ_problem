//https://www.luogu.com.cn/record/31630194
#include<bits/stdc++.h>
using namespace std;
int a[505],b[505];
int main(){
	string s1,s2;
	cin>>s1>>s2;
	a[0] = s1.length();
	b[0] = s2.length();
	for(int i=1;i<=s1.length();i++)	a[i] = s1[a[0]-i]-'0';
	for(int i=1;i<=s2.length();i++)	b[i] = s2[b[0]-i]-'0';
	int len = s1.length()>s2.length()?s1.length():s2.length();
	for(int i=1;i<=len;i++){
		a[i]+=b[i];
		a[i+1]+=a[i]/10;
		a[i]%=10;
	}
	len++;
	while((a[len]==0)&&(len>1))	len--;
	for(int i=len;i>0;i--)	printf("%d",a[i]);
	return 0;
} 
