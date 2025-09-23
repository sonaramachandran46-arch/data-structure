#include<stdio.h>
int main()
{
int m,n,i,j,k;
printf("entert the number of rows and coloumns of the matrices:");
scanf("%d%d",&m,&n);
int A[m][n],B[m][n],Sum[m][n],Sub[m][n],Mul[m][n];
printf("enter elements of matrix A:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&B[i][j]);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
Sum[i][j]=A[i][j]+B[i][j];
for(i=0;i<m;i++)
for(j=0;j<n;j++)
Sub[i][j]=A[i][j]-B[i][j];
if(m==n)
{
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
Mul[i][j]=0;
for(k=0;k<n;k++)
{
Mul[i][j]+=A[i][k]*B[k][j];
}
}
}
}
printf("\n Matrix Subtration:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d",Sub[i][j]);
printf("\n");
}
if(m==n)
{
printf("\n Matrix Multiplication:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d",Mul[i][j]);
printf("\n");
printf("\n");
}
}
else
{
printf("\nMatrix multiplication not possible(not square matrices).\n");
}
return 0;
}

