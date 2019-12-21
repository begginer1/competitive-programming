#include<stdio.h>
int main()
{
int i,t,k,n,c;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%d",&n);
scanf("%d",&k);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
c=0;
for(i=0;i<n;i++)
{
if(a[i]<=0)
c++;
}
if(c>=k)
printf("NO\n");
else
printf("YES\n");
}
return 0;
}
