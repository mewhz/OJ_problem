//https://pintia.cn/problem-sets/994805260223102976/problems/994805280074743808
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[10005];
	scanf("%s",a);
	int b[10]={0};
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='P')
			b[0]++;
		if(a[i]=='A')
			b[1]++;
		if(a[i]=='T')
			b[2]++;
		if(a[i]=='e')
			b[3]++;
		if(a[i]=='s')
			b[4]++;
		if(a[i]=='t')
			b[5]++;
	}
	while(true){
		if(b[0]>0){
			cout<<"P";
			b[0]--;
		}
		if(b[1]>0){
			cout<<"A";
			b[1]--;
		}
		if(b[2]>0){
			cout<<"T";
			b[2]--;
		}
		if(b[3]>0){
			cout<<"e";
			b[3]--;
		}
		if(b[4]>0){
			cout<<"s";
			b[4]--;
		}
		if(b[5]>0){
			cout<<"t";
			b[5]--;
		}
		if(b[0]+b[1]+b[2]+b[3]+b[4]+b[5]==0)
			break;
	}
	return 0;
}
