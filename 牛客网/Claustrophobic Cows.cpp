//ÌâÄ¿Á´½Ó:"https://ac.nowcoder.com/acm/contest/1081/L" 
#include<bits/stdc++.h>
#define M 2005
using namespace std;
long long a[M][5];
int main(){
    long long n;
    scanf("%d",&n);
    for(long long i=1;i<=n;i++){
        scanf("%lld%lld",&a[i][0],&a[i][1]);
    }
    long long A,B;
    double min = 1e10;
    for(long long i=1;i<=n;i++){
        for(long long j=i+1;j<=n;j++){
            long long c,d;
            c = a[i][0] - a[j][0];
            d = a[i][1] - a[j][1];
            if(c<0)  c*=-1;
            if(d<0)  d*=-1;
            double m = sqrt(c*c+d*d);
            if(m < min){
                min = m;
                A = i;
                B = j;
            }
        }
    }
    printf("%lld %lld",A,B);
    return 0;
}
