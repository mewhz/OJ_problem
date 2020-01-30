//http://182.92.86.249/problem.php?pid=1338
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	char a[20]="0";
	string s;
	for(int i=0;i<n;i++){
		s = "";
		for(int j=0;j<strlen(a);j++){
			if(a[j]=='0'){
				s+="1";
			}
			else	if(a[j]=='1'){
				s+="01";
			}
		}
		strcpy(a,s.c_str());
	}
	if(n==0){
		cout<<"0"<<endl;
	}
	else{
		cout<<s<<endl;
	}
	return 0;
}
