//��Ŀ����:"http://acm.hdu.edu.cn/showproblem.php?pid=6708" 
#include<bits/stdc++.h>
using namespace std;
const int N = 11;
const int M = (1<<N)+10;
char A[N][M][M];//����ַ�
int B[N];//���ÿ���ж����ַ� 
int main(){
        B[1] = 2;
        strcpy(A[1][0],"CC");
        strcpy(A[1][1],"PC");
        for(int i = 1; i < N-1;i++){
            B[i+1] = B[i]*2;
            for(int j = 0;j<B[i];j++){
                strcpy(A[i+1][j],A[i][j]);//���� 
                strcpy(A[i+1][j]+B[i],A[i][j]);//���� 
                strcpy(A[i+1][j+B[i]]+B[i],A[i][j]);//���� 
            }
            for(int j = 0;j<B[i];j++){
                for(int k = 0;k<B[i];k++){
                    A[i+1][j+B[i]][k] = 'C'+'P'-A[i][j][k];//ȡ�෴Ԫ�� 
                } 
            }
        }
        int t;
        scanf("%d",&t);
        for(int i=0;i<t;i++){
            int k;
            scanf("%d",&k);
            for(int j=0;j<B[k];j++){
                printf("%s\n",A[k][j]);
            }
        } 
} 
