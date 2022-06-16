#include <stdio.h>
#include <stdlib.h>

void main (int argc, char *argv[])
{
	char ch;
	FILE *file_ptr;
	file_ptr = fopen(argv[1], "w");
	printf("write sth to the file ... ");
	
	while ((ch=getchar()) != EOF)
		putc(ch, file_ptr);
	fclose(file_ptr);

	file_ptr = fopen(argv[1], "r");
	printf("The text in the file is ... \n");
	while ((ch=getchar()) != EOF)
		printf("%c", ch);
	fclose(file_ptr);
}
