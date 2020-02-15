//http://182.92.86.249/problem.php?pid=1456
#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005];
int add(string str1,string str2){
	int len = 0;
	int l = 0;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	a[0] = str1.length();
	b[0] = str2.length();
	for(int i=1;i<=a[0];i++){
		a[i] = str1[a[0]-i]-'0';
	}
	for(int i=1;i<=b[0];i++){
		b[i] = str2[b[0]-i]-'0';
	}
	len = a[0]>b[0]?a[0]:b[0];
	for(int i=1;i<=len;i++){
		a[i]+=b[i];
		if(a[i]>=10)	l++;
		a[i+1]+=a[i]/10;
		a[i]%=10;
	}
	return l;
}
int main(){
	string str1,str2;
	while(1){
		cin>>str1>>str2;
		if(str1=="0"&&str2=="0"){
			break;
		}
		else{
			int l = add(str1,str2);
			printf("%d\n",l);
		}
	}
	return 0;
}
