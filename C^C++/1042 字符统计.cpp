//https://pintia.cn/problem-sets/994805260223102976/problems/994805280817135616 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[30]={0};
	string S;
	getline(cin,S);
	for(int i=0;i<S.length();i++){
		if(S[i]<='z'&&S[i]>='a'){
			a[S[i]-'a']++;
		}
		else	if(S[i]<='Z'&&S[i]>='A'){
			a[S[i]-'A']++;
		}
		else{
			continue;
		}
	}
	int max = 0;
	int MAX = 0;
	for(int i=0;i<26;i++){
		if(max<a[i]){
			max = a[i];
			MAX = i;
		}
	}
	printf("%c %d",MAX+'a',max);
	return 0;
}
