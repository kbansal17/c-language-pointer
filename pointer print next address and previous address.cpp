#include<stdio.h>
main()
{
	int *p,a;
	scanf("%d",&a);
	p=&a;
	p++;
	printf("%u",p);
	printf("\n%x",p);
	p=&a;
	p--;
	printf("\n\n%u",p);
	printf("\n%x",p);
	
}
