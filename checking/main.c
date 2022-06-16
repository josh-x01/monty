#include <stdio.h>
#include <stdlib.h>

void is_number(char ch, int *index)
{
	char num[100];
	if (ch >= '0' && ch <='9')
		printf("%c", ch);	
	if (ch == '\n')
		printf("\n");
}


void main (int argc, char *argv[])
{
	char ch;
	FILE *file_ptr;
	int index = 0;

	file_ptr = fopen(argv[1], "r");
	while ((ch=getc(file_ptr)) != EOF)
	{
		is_number(ch, &index);
	}	
	fclose(file_ptr);
}
