#include<stdio.h>
struct A
{
	int a,b,c;
};
main()
{
struct A A1,*p;
p=&A1;
	scanf("%d%d%d",&A1.a,&A1.b,&A1.c);
	printf("%d%d%d",A1.a,A1.b,A1.c);  //by using object
	printf("\n\n%d%d%d",p->a,p->b,p->c);   //by using pointer object
    
}
