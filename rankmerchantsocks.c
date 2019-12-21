#include<stdio.h>
int main()
{
int i,j,temp,n,freq,pair=0;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
for(j=0;j<n-1-i;j++)
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
for(j=0;j<n-1;j++)
{
if(arr[j]==arr[j+1])
{
freq++;
}
else
{
pair+=freq/2;
freq=1;
}
}
if(j==n-1)
pair+=freq/2;
printf("%d ",pair);
return 0;
}
