//https://www.luogu.com.cn/problem/P1553
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	char c;
	int flag = 0;
	int a = 0;
	while((c = getchar())!=EOF) {
		if(c=='.')	flag = 1;
		if(c=='/')	flag = 2;
		if(c=='%')	flag = 3;
		s+=c;
	}
	if(s=="0"){
		printf("0");
		return 0;
	}
	if(s=="0%"){
		printf("0%%");
		return 0;
	}
	if(s=="0.0"){
		printf("0.0");
		return 0;
	}
	switch(flag) {
		case 0: {
			for(int i=s.length()-1; i>=0; i--) {
				if(s[i]=='0'&&a==0)	continue;
				a = 1;
				cout<<s[i];
			}
			break;
		}
		case 1: {
			string b;
			int i = 0;
			while(1) {
				if(s[i]=='.') {
					break;
				}
				b+=s[i];
				i++;
			}
			for(int j=i-1; j>=0; j--) {
				if(b[j]=='0'&&a==0)	continue;
				a = 1;
				cout<<b[j];
			}
			a = 0;
			int l = 0;
			string c;
			for(int j=i+1; j<s.length(); j++) {
				if(s[j]=='0')	l++;
				if(s[j]=='0'&&a==0)	continue;
				a = 1;
				c+=s[j];
			}
			a = 0;
			if((s.length()-i-1)==l) {
				cout<<".0";
				break;
			} else {
				cout<<".";
				for(int j=c.length()-1; j>=0; j--) {
					if(c[j]=='0'&&a==0)	continue;
					a = 1;
					cout<<c[j];
				}
			}
			break;
		}
		case 2: {
			string b;
			int i = 0;
			int k = 0;
			while(1) {
				if(s[i]=='/') {
					break;
				}
				if(s[i]=='0')	k++;
				b+=s[i];
				i++;
			}
			if(b.length()==k)	printf("0");
			for(int j=i-1; j>=0; j--) {
				if(b[j]=='0'&&a==0)	continue;
				a = 1;
				cout<<b[j];
			}
			a = 0;
			string c;
			for(int j=i+1; j<s.length(); j++) {
				if(s[j]=='0'&&a==0)	continue;
				a = 1;
				c+=s[j];
			}
			cout<<"/";
			a = 0;
			for(int j=c.length()-1; j>=0; j--) {
					if(c[j]=='0'&&a==0)	continue;
					a = 1;
					cout<<c[j];
				}
			break;
		}
		case 3: {
			for(int i=s.length()-2; i>=0; i--) {
				if(s[i]=='0'&&a==0)	continue;
				a = 1;
				cout<<s[i];
			}
			cout<<"%";
			break;
		}
	}
	return 0;
}
