//https://www.acwing.com/problem/content/793/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int main(){
	int a[N+5];
	int b[N+5];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	string s1,s2;
	cin>>s1>>s2;
	a[0] = s1.length();
	b[0] = s2.length();
	int len;
	for(int i=1;i<=a[0];i++)	a[i] = s1[a[0]-i]-'0';
	for(int i=1;i<=b[0];i++)	b[i] = s2[b[0]-i]-'0';
	len = a[0]>b[0]?a[0]:b[0];
	for(int i=1;i<=len;i++){
		a[i]+=b[i];
		a[i+1]+=a[i]/10;
		a[i]%=10;
	}
	len++;
	while((a[len]==0)&&(len>1))len--;
	for(int i=len;i>=1;i--){
		cout<<a[i];
	}
	return 0;
}
