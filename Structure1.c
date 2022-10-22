#include<stdio.h>

struct Employee
{
	char name[30];
	int num1, num2;
	
};

void main()
{
	struct Employee emp; // we need to write struct again when we save file in C but not in Cpp
	printf("Enter the name of the Student = ");
	scanf("%s",emp.name);
	printf("Enter 1st mark and 2nd mark \n");
	scanf("%i%i",&emp.num1,&emp.num2);
	printf("The record you enterd is  = \n");
	printf("%s\n%d\n%d",emp.name,emp.num1,emp.num2);
}