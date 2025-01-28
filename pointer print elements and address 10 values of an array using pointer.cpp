#include<stdio.h>
main()
{
	int a[10],*p;
	int i;
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	p=a;
	for(i=0;i<=9;i++)
	printf("\n%d",a[i]);
	printf("\n\n\n%x",p);
	
	
	
}
