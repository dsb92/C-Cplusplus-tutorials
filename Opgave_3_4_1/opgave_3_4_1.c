/* Skriv et program der tæller fire gange fra 1 til og med tolv. Hver gang der talt til otte, skal der udskrives "Dette er august måned" på skærmen.
   Hver gang der er talt til tolv, skal der udskrives "Nu er det jul" på skærmen. */

#include <stdio.h>

enum månedsdag {JANUAR, FEBRUAR, MARTS, APRIL, MAJ, JUNI, JULI, AUGUST, SEPTEMBER, OKTOBER, NOVEMBER, DECEMBER};

void test(int månnr)
{
   if(månnr == AUGUST)
     printf("%s\n", "Det er August");

   else if(månnr == DECEMBER)
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
