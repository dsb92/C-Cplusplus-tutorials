/* Med datatype char(character) tegn p� dansk - s�ttes flere sammen dannes et array, som kan fremstille en tekststreng
   Denne teknik kan bruges til at l�gge to tal sammen */

#include<stdio.h>

int main()

{

int a,b,c;
char tekst[] = "summen er : ";

a = 3;
b = 2;
c = a + b;
printf("%s%d\n", tekst, c); // udskriver en streng og derefter et decimaltal. Afsluttes med linieskift.
return 0;

}

/* Man kunne ogs� have skrevet printf("%s%d", tekst, a + b); */
