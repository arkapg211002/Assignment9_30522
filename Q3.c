/*Write a C program for Matrix Addition*/
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
void matrixAddition(int a[N][M],int b[N][M],int c[N][M])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}
int main()
{
    int i,j;
    int a[N][M],b[N][M],c[N][M];
    srand(time(NULL));
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            a[i][j]=rand()%10;
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            b[i][j]=rand()%10;
        }
    }
    printf("Matrix A\n");
    printMatrix(a,N,M);
    printf("Matrix B\n");
    printMatrix(b,N,M);
    matrixAddition(a,b,c);
    printf("Matrix C\n");
    printMatrix(c,N,M);
}
