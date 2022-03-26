 #include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10];
int m,n,p,q;
int i,j,k;
printf("Enter the order of matrix A :");
scanf("%d%d",&m,&n);
printf("Enter the order of matrix B:");
scanf("%d%d",&p,&q);
if(n!=p)
{
printf("Number of columns of Matrix A is not equal to number of rows of matrix B\n");
printf("Multiplication of matrices not possible....\n");
return (-1);
}
printf("\nEnter %d elements into matrix A : ", m*n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("\nThe matrix A is ---\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\nEnter %d elements into matrix B : ", p*q);
for (i=0;i<p;i++)
for (j=0;j<q;j++) 
scanf("%d",&b[i][j]);
printf("\nThe matrix B is ---\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j] = 0;
for(k=0;k<n;k++)
{
c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
}
}
}
printf("\nThe product matrix is ---\n\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;
}