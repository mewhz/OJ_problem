//https://ac.nowcoder.com/acm/contest/3036/B
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[10];
	char b;
	scanf("%s",a);
	getchar();
	scanf("%c",&b);
	int flag = 0;
	for(int i=0;i<2;i++){
		if(a[i]=='S'){
			if(b=='J'){
				flag = 1;
			}
		}
		else	if(a[i]=='J'){
			if(b=='B'){
				flag = 1;	
			}
		}
		else	if(a[i]=='B'){
			if(b=='S'){
				flag = 1;
			}
		}
	}
	switch(flag){
		case 1: printf("pmznb");break;
		case 0: printf("lyrnb");break;
	}
	return 0;
}
