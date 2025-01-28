#include<stdio.h>
main()
{
	int a[5],*p;
	int i,c;
	for(i=0;i<=4;i++)
	scanf("%d",&a[i]);
	p=a;
	
	p=p+4;

	for(i=4;i>=0;i--)
	{
	
	printf("%d",*p);
	p--;
}}
