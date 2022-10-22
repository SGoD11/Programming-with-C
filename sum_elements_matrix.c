#include<stdio.h>

void main()
{
	int A[10][10],i,j,sum=0,sizer,sizec;
	printf("Enter the row size and column size of the matrix = "); scanf("%d%d",&sizer,&sizec);
	printf("enter the elements of the matrix \n");
	for(i=0;i<sizer;i++)
	{
		for(j=0;j<sizec;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	
	for(i=0;i<sizer;i++)
	{
		for(j=0;j<sizec;j++)
		{
			sum = sum + A[i][j];
		}
	}
	printf("sum of elements in the matrix is %d",sum);
}