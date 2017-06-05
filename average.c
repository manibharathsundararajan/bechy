#include<stdio.h>
	void main()
	{
	int n,avg,sum=0,a[10],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	  sum=sum+a[i];
	}
	avg=sum/n;
	printf("%d",avg);
	}
	
