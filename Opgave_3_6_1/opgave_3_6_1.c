/* Skriv et program der kan bestemme st�rrelsen p� en fil. Filnavnet skal v�re et argument ved start af programmet, og resultatet
   skal udskrives p� sk�rmen.

/* Filnavn = fil1.c */

#include <stdio.h>

int main(int a, char *s[])

{

char ch;
char opgave_3_6_1[] = "opgave_3_6_1.c";
FILE *fp;

if ((fp = fopen(opgave_3_6_1, "r")) != NULL)
{
   while ((ch = getc(fp)) !=EOF)
     printf("%c",ch);
   close (opgave_3_6_1);
}

	return 0;

}
