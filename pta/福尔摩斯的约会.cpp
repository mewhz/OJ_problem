//https://pintia.cn/problem-sets/994805260223102976/problems/994805308755394560
#include<bits/stdc++.h>
using namespace std;
int main(){
	string E[] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int l1,l2;
	int flag = 1;
	int q,w,e;
	l1 = min(a.length(),b.length());
	l2 = min(c.length(),d.length());
	for(int i=0;i<l1;i++){
		if(a[i]==b[i]&&flag){
			if(a[i]<='G'&&a[i]>='A'){
				q = a[i] - 'A';
				flag = 0;
				continue;
			}
		}
		if(a[i]==b[i]&&!flag){
			if(a[i]<='N'&&a[i]>='A'){
				w = a[i] - 'A'+10;
				break;
			}
			else	if(a[i]<='9'&&a[i]>='0'){
				w = a[i] - '0';
				break;
			}
		}
	}
	for(int i=0;i<l2;i++){
		if(c[i]==d[i]){
			if((c[i]<='z'&&c[i]>='a')||(c[i]<='Z'&&c[i]>='A')){
				e = i;
				break;
			} 
		}
	}
	q%=7;
	cout<<E[q]<<" ";
	printf("%02d:%02d",w,e);
	return 0;
}
