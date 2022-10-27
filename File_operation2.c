#include<stdio.h>
void main()
{
	FILE *ptr;
	char ch;
	int nline=0,nblanks=0,ntab=0,nchar=0;
	ptr = fopen("text.txt","r");
	while(1)
	{
		ch = fgetc(ptr);
		if(ch == EOF)
		break;
		printf("%c",ch);
		nchar=nchar+1;
		
		if(ch == ' ')
		nblanks+=1;
		
		if(ch == '\t')
		ntab+=1;
		
		if(ch == '\n')
		nline+=1;
	
	}
	printf("\n");
	printf("The number of character's is %d\n",nchar);
	printf("The number of blanks is %d\n",nblanks);
	printf("The number of tabs is %d\n",ntab);
	printf("The number of newline is %d",nline);
	
	fclose(ptr);
}