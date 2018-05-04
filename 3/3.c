#include <stdio.h>
#include <string.h>

FILE *in1;
FILE *in2;

int main(void) {

	in1 = fopen("text1.txt", "r+");
	if ( in1 == NULL) printf ("can't open file \n");
	in2 = fopen("text2.txt", "a+b");
	if ( in2 == NULL) printf ("can't open file \n");

	char c = 0, h = 0;

	while ((c = fgetc(in1)) != EOF)
	{
		if (c >= 'a' && c <= 'z')
		{
			h = c - 'a' + 'A';
			fprintf (in2, "%c", h);
		}
		else if (c >= 'A' && c <= 'Z')
		{
			h = c - 'A' + 'a';
			fprintf (in2, "%c", h);
		}
		else
		{
			h = c;
			fprintf (in2, "%c", h);
		}
	}


	return 0;
}
