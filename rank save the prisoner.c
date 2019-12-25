#include<stdio.h>
int main()
{
int t,i,n,m,s,j;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%d%d%d",&n,&m,&s);
for(j=s;j<=n;j++)
{
m=m-1;
if(j==n)
{
    if(m==0)
    {
    printf("%d\n",j);
    m=1;
    break;}  
               //agr j print ho gya mtlb m 0 hah
else
j=0;            //count krne ki jaruat nhi tb
}
else if(m==0)
{
printf("%d\n",j);
break;
}
}
}
return 0;
}
