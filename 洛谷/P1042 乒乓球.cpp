#include<bits/stdc++.h>
using namespace std;
int main() {
	char c;
	string s="";
	while(( c = getchar())!='E') {
		s+=c;
	}
	int a = 0;
	int b = 0;
	if(s.length()==0)	printf("0:0\n");
	for(int i=0; i<s.length(); i++) {
		if(s[i]=='W')	a++;
		if(s[i]=='L')	b++;
		if(a-b>=2||b-a>=2) {
			if(a>=11||b>=11) {
				printf("%d:%d\n",a,b);
				a = 0;
				b = 0;
			}
		}
		if(i==s.length()-1)	printf("%d:%d\n",a,b);
	}
	a = 0;
	b = 0;
	printf("\n");
	if(s.length()==0)	printf("0:0\n");
	for(int i=0; i<s.length(); i++) {
		if(s[i]=='W')	a++;
		if(s[i]=='L')	b++;
		if(a-b>=2||b-a>=2) {
			if(a>=21||b>=21) {
				printf("%d:%d\n",a,b);
				a = 0;
				b = 0;
			}
		}
		if(i==s.length()-1)	printf("%d:%d\n",a,b);
	}
	return 0;
}
