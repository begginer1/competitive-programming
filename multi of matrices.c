#include<stdio.h>
int main()
{
int r1,r2,c2,c1,i,j,k,sum;
printf("enter sizr r1 nd c1");
scanf("%d %d",&r1,&c1);
int arr1[r1][c1];
printf("enter element of arr1");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
scanf("%d",&arr1[i][j]);
}
printf("enter the r2nd c2");
scanf("%d %d",&r2,&c2);
int arr2[r2][c2];
printf("enter element of arr2");
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
scanf("%d",&arr2[i][j]);
if(c1==r2)
{ int arr3[r1][c2];
for(i=0;i<r1;i++)
{
for(k=0;k<c2;k++)
{sum=0;
for(j=0;j<c1;j++)
{
sum+=arr1[i][j]*arr2[j][k];
}
arr3[i][k]=sum;
}
}
for(i=0;i<r1;i++)
for(j=0;j<c2;j++)
printf("%d ",arr3[i][j]);
}
else printf("matrices * is not possible");
return 0;
}
