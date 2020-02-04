//http://182.92.86.249/problem.php?pid=1257
#include<bits/stdc++.h>
using namespace std;
int main(){
	char s1[105];
	char s2[105];
	scanf("%s",s1);
	scanf("%s",s2);
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	int len = l1>l2?l1:l2;
	int num = 0;
	for(int i=0;i<len;i++){
		num = s1[i]-s2[i];
		if(num!=0){
			cout<<num;
			return 0;
		}
	}
	cout<<"0";
	return 0;
}
