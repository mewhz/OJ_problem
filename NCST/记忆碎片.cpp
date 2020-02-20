//http://182.92.86.249/problem.php?pid=1592
#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[25];
	scanf("%s",s);
	map<string,int> m;
	string str[25];
	int j = 0;
	for(int i=0;i<strlen(s);i++){
		char c = s[i];
		int k = i+1;
		str[j]+=c;
		while(1){
			if(s[k]==c){
				str[j]+=c;
				k++;
			}
			else{
				i = k-1;
				int m = 0;
				for(m = 0;m<j;m++){
					if(str[m]==str[j]){
						str[j]="";
						break;
					}
				}
				if(m==j){
					j++;
				}
				break;
			}
		}
	}
	for(int i=0;i<j;i++){
		cout<<str[i]<<endl;
	}
	return 0;
}
