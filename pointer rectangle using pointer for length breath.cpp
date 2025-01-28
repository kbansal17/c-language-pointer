#include<stdio.h>
main()
{
	int *p,a;
	int *q,b;
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	printf("%d",*p**q);	
}
