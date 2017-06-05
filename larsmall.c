#include<stdio.h>
void main()
{
int i,j,a[10],n,t;
scanf("%d",n);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("%d \n %d",a[0],a[n-1]);
}
