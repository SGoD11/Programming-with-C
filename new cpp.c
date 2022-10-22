#include<stdio.h>
int main()
{
	float da, hr,bs, gross;
	printf("Enter your basic salary = ");
	scanf("%f",&bs);
	da = 0.4 * bs;
	hr = 0.2 * bs;
	gross = bs+da+hr;
	printf("\n your dearness allowence is = %f",da);
	printf("\n your house rent is = %f",hr);
	printf("\n your gross salary is = %f",gross);
}
/* my first C programming by subhajit dhar*/
