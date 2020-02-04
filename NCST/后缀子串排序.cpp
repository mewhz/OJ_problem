//http://182.92.86.249/problem.php?pid=1417 
#include<bits/stdc++.h>
using namespace std;
int main() {
	char c;
	char str[10000];
	int i = 0;
	while(c = getchar()) {
		string s[10000];
		if(c=='\n'||c==EOF) {
			str[i] = '\0';
			i = 0;
			int len = strlen(str);
			for(int j=0; j<len; j++) {
				string y(&str[j],&str[len]);
				s[j] = y;
			}
			sort(s,s+len);
			for(int j=0; j<len; j++) {
				cout<<s[j]<<endl;
			}
			if(c==EOF){
				break;
			}
		} else {
			str[i] = c;
			i++;
		}
	}
	return 0;
}
