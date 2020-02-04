//http://182.92.86.249/problem.php?pid=1212
#include<stdio.h>
int main(void)
{
 
    char a, b, c, d, z;
    double n;
    
    scanf("%c%c%c%lf%c%c" , &a , &b , &c , &n ,&d , &z);
    
    printf("%-8d|%8.1lf|%c", (a-'0')*100+(b-'0')*10+(c-'0'), n, z);
    
    return 0;
} 
