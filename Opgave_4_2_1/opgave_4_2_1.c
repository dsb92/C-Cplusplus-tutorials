/* Tilpas programmet struct2.c s�ledes at der indtastes og udskrives 5 personer */

#include <stdio.h>

struct personType
{
   int alder;
   char forNavn[20];
   char efterNavn[20];
};

int hentLinie(char linie[], int MAX)
{

   int i = 0;
   char ind;

   while (i < MAX-1 && ( ind = getchar() ) != '\n')
      linie[i++] = ind;
   linie[i] = '\0';
   return i;}

int main()

{

   int i;
   int antal = 5;
   char tmp[4];
   struct personType personer[10];

   for (i = 0; i < antal; i++)
     {
    	printf("%s", "Indtast fornavn : ");
  		hentLinie(personer[i].forNavn, 20);
		printf("%s", "Indtast efternavn : ");
  		hentLinie(personer[i].efterNavn, 20);
		printf("%s", "Indtast alder : ");
		hentLinie(tmp, 4);
		personer[i].alder = atoi(tmp);
     }

    printf("%s\n", "Udskriver");
    for (i = 0; i < antal; i++)
    {
		printf("%s\t", personer[i].forNavn);
		printf("%s\t", personer[i].efterNavn);
		printf("%4d\n", personer[i].alder);
    }

    return 0;
}
