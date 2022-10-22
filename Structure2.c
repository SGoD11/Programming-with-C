#include<conio.h>
 struct student
 {
 	int num;
 	char name[13];
 	float percentile;
 };
 
 int main()
 {
 	struct student std[10];
 	int size,i;
 	printf("enter how many children is present in the class = ");
 	scanf("%d",&size);
 	for(i =0;i<size;i++)
 	{
 		printf("Enter the name of the children(%d) - ",i+1); scanf("%s",std[i].name);
 		printf("Enter the percentage of the children(%d)- ",i+1); scanf("%f",&std[i].percentile);
	}
	printf("\n Name and Percentile format \n");
	for(i=0;i<size;i++)
	{
		printf("The record you enterd for rollno %d is = ""%s"" and ""%f"" \n ",i+1,std[i].name,std[i].percentile);
	}
	return 0;
 }