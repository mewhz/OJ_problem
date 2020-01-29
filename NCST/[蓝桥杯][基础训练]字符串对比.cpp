//http://182.92.86.249/problem.php?pid=1097
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int flag = 0;
	if(s1.length()!=s2.length()){
		flag = 1;
	}
	else{
		int i;
		for(i=0;i<s1.length();i++){
			if(s1[i]==s2[i]){
				continue;
			}
			else{
				if(s1[i]<='z'&&s1[i]>='a'){
					s2[i]+=32;
					if(s1[i]==s2[i]){
						flag = 3;
						continue;
					}
					else{
						flag = 4;
						break;
					}
				}
				else{
					s2[i]-=32;
					if(s1[i]==s2[i]){
						flag = 3;
						continue;
					}
					else{
						flag = 4;
						break;
					}
				}
			}
		}
		if(i==s1.length()&&flag==0){
			flag = 2;
		}
	}
	cout<<flag<<endl;
	return 0;
}
