#include <stdio.h>

int main(void)
{
	int N = 64;
	FILE *inputFile;
	inputFile = fopen("hello.txt", "a+b");
	char cha[N];
	int kek = 1000;

	if ( inputFile == NULL) printf ("can't open file \n");

	else printf ("file opened \n");

	while (fgets (cha, N, inputFile) != NULL)
		printf("%s", cha);

	printf("\n");
	fprintf(inputFile, "\n%d", kek);
	fclose(inputFile);

	return 0;
}
