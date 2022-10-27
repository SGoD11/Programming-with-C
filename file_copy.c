#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fs, *ft;
	char ch;
	fs = fopen("text.txt","r");
	if (fs == NULL)
	{
		puts("cannot open source file");
		exit(1);
	}
	ft = fopen("text2.txt","w");
	if(ft == NULL)
	{
		puts("Cannot open Target File");
		fclose(fs); exit(2);
	}
	while(1)
	{
		ch=fgetc(fs);
		if(ch == EOF)
		break;
		else
		fputc(ch,ft);
	}
	fclose(fs);
	fclose(ft);
	return 0;
}