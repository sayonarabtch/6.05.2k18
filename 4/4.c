#include <stdio.h>
#include <string.h>

FILE *in1;
FILE *in2;

int main(void) {

	in1 = fopen("text1.txt", "r+");
	if ( in1 == NULL) printf ("can't open file \n");
	in2 = fopen("text2.txt", "a+b");
	if ( in2 == NULL) printf ("can't open file \n");

	char n;
	while(!feof(in1))
	 {
	 int res = fscanf(in1,"%c",&n);
	 if (res == EOF)
	     break;
	 printf("%c",n);
	 }


	/*
	int N = 32;
	char cha1[N] ;
	char cha2[N] ;

	while ((fgets (cha1, N, in1) ) && (fgets (cha2, N, in2) ) != NULL)
	{
		while (fgets (cha1, N, in1) != NULL)
			printf("%s ", cha1);
		while (fgets (cha2, N, in2) != NULL)
			printf("%s ", cha2);
	}
	*/


	return 0;
}
