/*Write a C program for Matrix Multiplication*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define N 4
#define M 4
#define K 4
void printMatrix(int a[N][M],int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void matrixMultiplication(int a[N][M],int b[M][K],int c[N][K])
{
    int i,j,k;
    for(i=0;i<N;i++)
    {
        for(j=0;j<K;j++)
        {
            c[i][j]=0;
            for(k=0;k<M;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}
int main()
{
    int i,j,k;
    int a[N][M],b[M][K],c[N][K];
    srand(time(NULL));
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            a[i][j]=rand()%10;
        }
    }
    for(i=0;i<M;i++)
    {
        for(j=0;j<K;j++)
        {
            b[i][j]=rand()%10;
        }
    }
    printf("Matrix A\n");
    printMatrix(a,N,M);
    printf("Matrix B\n");
    printMatrix(b,M,K);
    matrixMultiplication(a,b,c);
    printf("Matrix C\n");
    printMatrix(c,N,K);
    return 0;
}

