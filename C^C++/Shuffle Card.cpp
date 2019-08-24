//题目链接:"http://acm.hdu.edu.cn/showproblem.php?pid=6707" 
#include<bits/stdc++.h>
#define N 200010
using namespace std;
int ss[N],D[N],h,idx = 0,b[N]={0};
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a;
    scanf("%d",&a);
    ss[idx] = a;//存放数据
    D[idx] = -1;//存放下标
    h = idx++;//存放起始下标
    for(int i=0;i<n-1;i++){
        scanf("%d",&a);
        ss[idx] = a;
        D[idx] = D[idx-1];
        D[idx-1] = idx++;
    }
    for(int i=0;i<m;i++){
        scanf("%d",&a);
        ss[idx] = a;
        D[idx] = h;
        h = idx++;
    }
    for(int i=h;i!=-1;i = D[i]){
        if(!b[ss[i]]){
            printf("%d ",ss[i]);
            b[ss[i]] = 1;
        }
    }
    return 0;
}
