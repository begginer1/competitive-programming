#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,c=0,k,start,rem,mult,end;
scanf("%d%d%d",&start,&end,&k);
for(i=start;i<=end;i++)
{n=i;
mult=0;
while(n!=0)
{
rem=n%10;
mult=(mult*10)+rem;
n=n/10;
}
if(abs(i-mult)%k==0)
c++;
}
printf("%d",c);
return 0;
}
