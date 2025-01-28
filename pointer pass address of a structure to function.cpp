#include<stdio.h>
struct A
{
	int a,b,c;
};
void display(struct A *p)
{
	printf("\n\n%d%d%d",p->a,p->b,p->c);	
}
main()
{
struct A A1;
	scanf("%d%d%d",&A1.a,&A1.b,&A1.c);
    display(&A1);
}
