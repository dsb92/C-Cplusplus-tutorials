/* Skriv et program der omregner antal dage til antal år og dage. Se bort fra skudår og regn med, at der er 365 dage på et år. */

#include<stdio.h>

int main()

{

int dage = 780;
float aar;


aar = dage/365.0;  //dage omregnes til år og dage.


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
