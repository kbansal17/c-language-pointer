#include<stdio.h>
void array(float a[3] ,float *m)
{
	int i;
	*m=a[0];
	for(i=1;i<=2;i++)
	{
		if(a[i]>*m)
		*m=a[i];
	}
}
main()
{
	float a[3],m;
	int i;
	for(i=0;i<=2;i++)
	scanf("%f",&a[i]);
	array(a,&m);
	printf("%f",m);
}
