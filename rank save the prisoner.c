#include<stdio.h>
int main()
{
int t,i,n,m,s,j;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%d%d%d",&n,&m,&s);
j=s;
for(;j<=n;j++)
{
m--;
if(j==n&&m!=0)
{ m--;
j=1;
}
if(m==0)
break;
}
printf("%d\n",j);
}
return 0;
}
