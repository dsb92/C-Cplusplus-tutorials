/* Skriv et program der kan teste struct'en biltype. Typen skal indeholde variabler for bilens navn, dens årgang og antal hestekræfter. */

#include <stdio.h>

struct bilType
{
  int aargang;
  char navn[20];
  int hestekraefter;
};

int main()

{

struct bilType lambo;

lambo.aargang = 2012;
lambo.hestekraefter = 325;
strcpy(lambo.navn, "Lamborghini");

printf("%s\n", lambo.navn);
printf("%d\n", lambo.aargang);
printf("%d\n", lambo.hestekraefter);

return 0;

}
