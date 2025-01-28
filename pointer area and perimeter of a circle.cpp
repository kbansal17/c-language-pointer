#include<stdio.h>
void circle(float r,float *a ,float *p)
{
	*a=3.14*r*r;
	*p=2*3.14*r;
}
main()
{
	float x,y,z;
	scanf("%f",&x);
	circle(x,&y,&z);
	printf("%f\n%f",y,z);
}
