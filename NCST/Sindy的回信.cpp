//http://182.92.86.249/problem.php?pid=1427
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	char c;
	int num = 0;
	for(int i=0;i<n;i++){
		c = getchar();
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
			num++;
		}
	}
	if(num>=3){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}
