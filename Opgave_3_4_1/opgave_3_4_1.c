/* Skriv et program der t�ller fire gange fra 1 til og med tolv. Hver gang der talt til otte, skal der udskrives "Dette er august m�ned" p� sk�rmen.
   Hver gang der er talt til tolv, skal der udskrives "Nu er det jul" p� sk�rmen. */

#include <stdio.h>

enum m�nedsdag {JANUAR, FEBRUAR, MARTS, APRIL, MAJ, JUNI, JULI, AUGUST, SEPTEMBER, OKTOBER, NOVEMBER, DECEMBER};

void test(int m�nnr)
{
   if(m�nnr == AUGUST)
     printf("%s\n", "Det er August");

   else if(m�nnr == DECEMBER)
       printf("%s\n", "Nu er det jul");
}

int main()

{
   int i;

   for (i = JANUAR; i <= DECEMBER; i++)
        {
		   printf("%d\n", i);
           test(i);
		}
   for (i = JANUAR; i <= DECEMBER; i++)
	   {
		   printf("%d\n", i);
           test(i);
	   }
   for (i = JANUAR; i <= DECEMBER; i++)
	   {
           printf("%d\n", i);
           test(i);
	   }
   for (i = JANUAR; i <= DECEMBER; i++)
	   {
           printf("%d\n", i);
           test(i);
	   }
}
