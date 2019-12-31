//ÌâÄ¿Á´½Ó:"http://acm.hdu.edu.cn/showproblem.php?pid=6702" 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    long long a,b;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%lld%lld",&a,&b);
        long long  c = a&b;
        if(!c){
            printf("1\n");
        }
        else
            printf("%lld\n",c);
    }
    return 0;
}
