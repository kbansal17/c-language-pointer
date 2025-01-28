#include<stdio.h>
void sphere(float r ,float *v)
{
	*v=4*3.14*r*r*r/3;
}
main()
{
	float x,y;
	scanf("%f",&x);
	sphere(x,&y);
	printf("%f",y);
}
