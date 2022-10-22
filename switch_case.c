#include<stdio.h>

void main()
{
	int a;
	float b,c;
	printf("enter 1 for addition.");
	printf("\nenter 2 for subtraction.");
	printf("\nenter 3 for multiplication.");
	printf("\nenter 4 for division.\n");
	scanf("%d",&a);
	printf("enter first number= ");scanf("%f",&b);
	printf("enter second number= ");scanf("%f",&c);
	switch(a)
	{
		case 1:printf("after addition we get = %f", a+b); break;
		case 2:printf("after subtraction we get = %f", a-b); break;
		case 3:printf("after multiplication we get = %f", a*b); break;
		case 4:printf("after division we get = %f", a/b); break;
		default:
			printf("O blind look at the options again");
	}
}
