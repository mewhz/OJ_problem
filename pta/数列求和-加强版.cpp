//题目链接:"https://pintia.cn/problem-sets/14/problems/3006" 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <string.h>
int  main()
{
    int p[100002] = {0};
    int a,n;
    int i,j;
    int t,fd=0; //中间转换变量 ，之前进位的数

    scanf("%d %d",&a,&n);
    if ( n==0 ){
        printf("0\n");
        return 0;
    }
    j = 0;
    for( i=n; i>0; i--,j++){
        t = i*a + fd;
        fd = t/10;
        p[j] = t%10;
    }
    if( fd!=0 ){
        printf("%d",fd);
    }
    for( i=j-1; i>=0; i--){
        printf("%d",p[i]);
    }
    return 0;
}
