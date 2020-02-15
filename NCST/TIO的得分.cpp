//http://182.92.86.249/problem.php?pid=1446
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int sum = 0;
		char str[55];
		scanf("%s",str);
		for(int j=0;j<strlen(str);j++){
			if(str[j]=='I'){
				sum+=2;
			}
			if(str[j]=='O'){
				int k = j+1;
				sum+=1;
				int len = 1;
				while(true){
					if(str[k]=='O'){
						len++;
						sum+=len;
					}
					else{
						j = k-1;
						break;
					}
					k++;
				}
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
