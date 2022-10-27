#include<stdio.h>
 void main()
 {
 	FILE *fp;
 	char ch;
 	fp = fopen("text.txt","r");
 	while(1)
 	{
 		ch = fgetc(fp);
 		if(ch == EOF)
 		break;
 		printf("%c",ch);
	 }
	 printf("\n");
	 fclose(fp);
 }