//http://182.92.86.249/problem.php?pid=1362
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[1005];
	char c;
	int j = 0;
	while((c=getchar())!=EOF){
		a[j] = c;
		j++;
	}
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='y'&&a[i+1]=='o'&&a[i+2]=='u'){
			cout<<"we";
			i+=3;
		}
		cout<<a[i];
	}
	return 0;
}
