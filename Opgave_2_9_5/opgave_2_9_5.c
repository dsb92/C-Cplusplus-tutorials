/* Skriv et program der omregner antal dage til antal �r og dage. Se bort fra skud�r og regn med, at der er 365 dage p� et �r. */

#include<stdio.h>

int main()

{

int dage = 780;
float aar;


aar = dage/365.0;  //dage omregnes til �r og dage.


printf("%d%s\n", dage, " dage i aar og dage: ");

if( (dage % 365) == 0)
   {
     printf("%d%s\n", (int)aar, " aar og 0 dage ");
   }

else
    {
	printf("%f%s\n", aar, " aar og dage ca. ");
    }

return 0;

}
