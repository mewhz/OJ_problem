//http://182.92.86.249/problem.php?pid=1339
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5;
int a[105];
bool isa[N+5];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		isa[a[i]] = 1;
	}
	sort(a,a+n);
	int num = 0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int sum = a[i]+a[j];
			if(isa[sum]){
				num++;
           isa[sum] = 0;			}
		}
	}
	printf("%d",num);
	return 0;
}
