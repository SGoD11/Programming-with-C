#include<stdio.h>

void main()
{
	int A[10][10],i,j,sum_row,sum_column,sizer,sizec;
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
		sum_row=0; sum_column=0;
		for(j=0;j<sizec;j++)
		{
		sum_row=sum_row+A[i][j];
		sum_column = sum_column + A[j][i];
		}
		printf("Sum of the %d row is = %d\n",i+1,sum_row);
		printf("Sum of the %d column is = %d\n",j+1,sum_column);
	}
	
}
